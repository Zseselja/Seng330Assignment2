/// \mainpage
/// main.cpp
///
/// Assignment 2 \n
/// Created on: Nov 14, 2015 \n
/// <h4> Author: Zachary Seselja <h4> \n
///
///
///
///

#include <string>
#include <iostream>
#include <typeinfo>
#include <windows.h>
#include <cstdlib>
#include <vector>
#include <fstream>
#include "main.h"
using namespace std;



///
///	Base class Ship
///




///
///	class derivered from Base Ship
///
class battleship : public Ship{
	public:
		battleship(int y){
			this->x = y;
		}
		///
		/// Clone function
		///
		Ship* clone(){
			std::cout << "Cloning Battleship\n";
			return new battleship(*this);
		}
		///
		/// Destructor function
		///
		~battleship(){
			std::cout << "Deleting Battleship\n";
		}
};
///
/// class derivered from Base Ship
///

class sub : public Ship{
	public:
		sub(int y){
			this->x = y;
		}
		///
		/// Clone function
		///
		Ship* clone(){
			std::cout << "Cloning Sub\n";
			return new sub(*this);
		}
		///
		/// Destructor function
		///
		~sub(){
			std::cout << "Deleting Sub\n";
		}
};




///
/// Factory class for Ships
///






///
/// Main Funtion	\n
/// In the Main the user is prompted to create two \n
/// Ship Objects. These Ships are either type sub class or \n
/// battleship class. Both these type of Objects are derived \n
/// from the Ship Base class.
///
///

//	int main(){
//		std::cout << "Do you want to load your old ships? YES/NO\n";
//		shipFactory::init();
//		Ship *ship1;
//     	Ship *ship2;
//
//		std::vector<Ship*> fleet;
//		///
//		///
//		///
//
//		int input_num1;
//		int input_num2;
//
////		std::string input = " ";
////		Ship *testship;
//		std::string input1;
//		std::string input2;
//
//		input1 = readline();
////		should we load the fleet yes or no?
//		if(input1 == "yes" || input1 =="YES"){
//
//			fleet = deSerialize();
//		}else{
////			continue
//		}
//
////		std::cout << "Ship building Prototypes?\n";
//		std::cout << "Please choose 2 ships to build?\n";
//		std::cout << "Your Choices are BATTLESHIP OR SUB\n";
//		bool valid = true;
//
////		start of while loop
//		while(valid){
//		std::cout << "What type of ship do you want for testship1?\n";
//		input1 = readline();
//		std::cout << "What type of ship do you want for testship2?\n";
//		input2 = readline();
//
//
////		cloning either SUB or BATTLESHIP
//		if(input1 == "SUB" || input1 == "sub"){
////		cloning SUB
//			input_num1 = 3;
//			ship1 = shipFactory::get_testship2();
//
//		}else{
////		cloning battlesship
//			input_num1 = 5;
//			ship1 = shipFactory::get_testship1();
//		}
//
//		if(input2 == "SUB" || input2 == "sub"){
//
////		cloning SUB
//
//			input_num2 = 3;
//			ship2 = shipFactory::get_testship2();
//
//		}else{
////			cloning battlesship
//			input_num2 = 5;
//			ship2 = shipFactory::get_testship1();
//		}
//		fleet.push_back(ship1);
//		fleet.push_back(ship2);
//
//
//
//		std::cout << "Do you want to make them again? YES/NO\n";
//		input1 = readline();
//			if (input1 == "YES" || input1 == "yes" ){
//				valid = true;
//
////				continue on
//			}else{
//				std::cout << "Do you want to save? YES/NO\n";
//				valid = false;
//			}
//
//
//		}
//		input1 = readline();
//		if(input1 == "yes" || input1 =="YES"){
//					serialize(fleet);
//		cout << "      Fleet Saved\n";
//		cout << "--------------------------------\n";
//			}else{
//		cout << "      Fleet Being Deleted\n";
//		cout << "--------------------------------\n";
//		//			continue
//			}
//
//
//
////		Deleting contents of fleet
//		int x  = 0;
//		for(x ; x < fleet.size(); x++){
//			delete fleet[x];
//		}
//
//		std::cout << "\nThank you\n";
//		Sleep(2000);
//
//
//
//		return 0;
//
//
//
//	}


