/*
 * user.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: Zachary Seselja
 */

#include "Ship.h"
#include "battleship.h"

#include <string>
#include <iostream>
#include <ostream>
#include <istream>



//#include <stdio>

//#include <cstlib>

//
namespace model
{



std::string readline()
{
		std::string line;
		std::getline(std::cin, line);
		std::cout  << line;
		return line;

}


	int main(){

//		std::string input = " ";
//		Ship *testship;
		std::string input1;
		std::string input2;
		std::cout << "Ship building Prototypes?\n";
		std::cout << "Please choose 2 ships to build?\n";
		std::cout << "Your Choices are BATTLESHIP OR SUB";
		std::cout << "What type of ship do you want for testship1?\n";
		input1 = readline();
		std::cout << "What type of ship do you want for testship2?\n";
		input2 = readline();

//		case(input2)





		return 0;


	}

}
