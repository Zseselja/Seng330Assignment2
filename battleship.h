/*
 * battleship.h
 *
 *  Created on: Nov 15, 2015
 *      Author: Zachary Seselja
 */

#ifndef BATTLESHIP_H_
#define BATTLESHIP_H_


#include "Point.h"
#include "Ship.h"

namespace model
{

	using Ship = model::Ship;




	class battleship{

		virtual Ship *buildBattleship(Point *head)
				{
					Ship *x = nullptr;
					x = new Ship(ShipType::BATTLESHIP, 5, head);
					return x;

				}




		Ship virtual clone(Ship x){
			Ship y = x;
			return y;

		}
	};

}


#endif /* BATTLESHIP_H_ */
