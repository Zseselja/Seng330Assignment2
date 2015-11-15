/*
 * Ship.h
 *
 *  Created on: Nov 14, 2015
 *      Author: Zachary Seselja
 */

#ifndef SHIP_H_
#define SHIP_H_



#include "Point.h"
#include <cmath>
#include <stdexcept>
#include <iostream>

namespace model
{

enum class ShipType {
		AIRCRAFT_CARRIER,
		BATTLESHIP,
		DESTROYER,
		PATROL,
		SUB
	};


	class Ship
	{

	private:
		ShipType type = static_cast<ShipType>(0);
		int fullHealth = 0;
		int health = 0;

		Point *head;
		Point *tail;

		/// <param name="size"> length of the ship </param>
		/// <param name="head"> starting point of the ship </param>
		/// <param name="tail"> end point of the ship (must come up and right after head)
		/// </param>
		/// <exception cref="Exception">  </exception>
	public:
		Ship(ShipType type, int size, Point *head, Point *tail) throw(std::exception)
		{
			this->type = type;
			this->health = size;
			this->fullHealth = size;

			// Validate that the ship dimensions are 1*x or x*1
			bool validShip = false;
			if (head->x == tail->x)
			{ //vertical ship
				if ((head->y - tail->y) ==* size-1)
				{
					validShip = true;
				}
			}
			else if (head->y == tail->y)
			{ //horizontal ship
				if ((head->x - tail->x) == size-1)
				{
					validShip = true;
				}
			}

			if (validShip)
			{
				this->head = head;
				this->tail = tail;
			}
			else
			{
				throw std::exception("No Fat Ships!");
			}

		}

		/*
		 * Automatically sets the tail horizontally from the head.
		 */
		Ship(ShipType type, int size, Point *head) throw(std::exception)
		{
			this->type = type;
			this->health = size;

			this->head = head;
			this->tail = new Point(head->x + size-1, head->y);
		}

		virtual ~Ship(Ship *x , Point *head, Point *tail)
		{
			delete *tail;
			delete *head;
			delete *x;
		}

		virtual void decreaseHealth()
		{
			this->health = this->health - 1;
		}

		virtual bool isSunk()
		{
			return this->health == 0;
		}

		virtual Point *getHead()
		{
			return this->head;
		}

		virtual Point *getTail()
		{
			return this->tail;
		}

		virtual void setHead(Point *head)
		{
			this->head = head;
		}

		virtual void setTail(Point *tail)
		{
			this->tail = tail;
		}

		virtual bool isVertical()
		{
			return head->x == tail->x;
		}

		virtual int size()
		{
			if (isVertical())
			{
				return (head->y - tail->y);
			}
			else
			{
				return (head->x - tail->x);
			}
		}
		   /*
		* This method determines if the shot from a player
		* hits a ship on the board or not.
		*/
		virtual bool intersects(Point *hit)
		{
			bool intersection = false;
			if (this->isVertical())
			{
				if (hit->x == this->head->x)
				{
					if (hit->y >= this->head->y && hit->y <= this->tail->y)
					{
						intersection = true;
					}
				}
			}
			else
			{
				if (hit->y == this->head->y)
				{
					if (hit->x >= this->head->x && hit->x <= this->tail->x)
					{
						intersection = true;
					}
				}
			}
			return intersection;
		}



		virtual ShipType getType()
		{
			return type;
		}

		//return how many times this ship has been hit.
		virtual int getNumHits()
		{
				return this->fullHealth - health;
		}

	};

}




#endif /* SHIP_H_ */
