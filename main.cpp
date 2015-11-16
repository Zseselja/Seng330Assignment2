/*
 * user.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: Zachary Seselja
 */
//#include "Point.h"   Ended up adding the classes to one file to simplify.
//#include "Ship.h"
//#include "battleship.h"
//#include "sub.h"
#include <string>
#include <iostream>
#include <ostream>
#include <istream>



// Base class
class Ship{
	protected:
		int x;

	public:
//	Ship(int y){
//		this->x = y;
//
//	}
		int getNum(){
			return this->x;
		}

		virtual Ship* clone() = 0;

};

//  class derivered from Base
class battleship : public Ship{
	public:
		battleship(int y){
			x = y;
		}
		Ship* clone(){
			std::cout << "cloning BATTLESHIP\n";
			return new battleship(*this);
		}
		~battleship(){
			std::cout << "deleting BATTLESHIP\n";
		}
};

//  class derivered from Base
class sub : public Ship{
	public:
		sub(int y){
			x = y;
		}
		Ship* clone(){
			std::cout << "cloning SUB\n";
			return new sub(*this);
		}
		~sub(){
			std::cout << "deleting SUB\n";
		}
};



// Factory class
class shipFactory{
	static Ship* testship1;
	static Ship* testship2;

public:
	static void init(){
		testship1 = new battleship(5);
		testship2 = new sub(3);

		std::cout << "Creating testship1\n";
		std::cout << "Creating testship2\n";
	}
	static Ship* get_testship1(){
//		CLONING testship1
		return testship1->clone();
	}
	static Ship* get_testship2(){
//		CLONING testship2
		return testship2->clone();

	}

};




std::string readline()
{
		std::string line;
		std::getline(std::cin, line);
		std::cout  << line << "\n";
		return line;

}

Ship* shipFactory::testship1 = 0;
Ship* shipFactory::testship2 = 0;



	int main(){


		int input_num1;
		int input_num2;
//		std::string input = " ";
//		Ship *testship;
		std::string input1;
		std::string input2;

		shipFactory::init();

		Ship *ship1;
		Ship *ship2;

		std::cout << "Ship building Prototypes?\n";
		std::cout << "Please choose 2 ships to build?\n";
		std::cout << "Your Choices are BATTLESHIP OR SUB\n";
		std::cout << "What type of ship do you want for testship1?\n";
		input1 = readline();
		std::cout << "What type of ship do you want for testship2?\n";
		input2 = readline();


//		cloning either SUB or BATTLESHIP
		if(input1 == "SUB"){
//			cloning SUB
			input_num1 = 3;
			ship1 = shipFactory::get_testship2();

		}else{
//			cloning battlesship
			input_num1 = 5;
			ship1 = shipFactory::get_testship1();
		}

		if(input2 == "SUB"){
//			cloning SUB
			input_num2 = 3;
			ship2 = shipFactory::get_testship2();

		}else{
//			cloning battlesship
			input_num2 = 5;
			ship2 = shipFactory::get_testship1();
		}







		delete ship2;
		delete ship1;



		return 0;



	}


