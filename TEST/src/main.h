/*
 * main.h
 *
 *  Created on: Nov 16, 2015
 *      Author: Zachary Seselja
 */

#ifndef SRC_MAIN_H_
#define SRC_MAIN_H_
#include <string>
#include <iostream>
#include <typeinfo>
#include <windows.h>
#include <cstdlib>
#include <vector>
#include <fstream>
//#include "main.cpp"



class Ship{

//	protected:


	public:
	int x;
		///
		/// Get Number of the Ship function
		///

		virtual ~Ship(){
			std::cout << "Ship distructror called\n";
		}
		int getNum(){
			return this->x;
		}
		///
		/// Clone function
		///
		virtual Ship* clone() = 0;

};

//
//std::string readline()
//{
//	///
//	/// Function used for reading user input.
//	///
//		std::string line;
//		std::getline(std::cin, line);
////		std::cout  << line << "\n";
//		return line;
//
//};
class shipFactory{
// Static template classes

	static Ship* testship1;
	static Ship* testship2;

public:
	///
	///	init function
	///
	static void init(){


//		std::cout << "Creating testship1\n";
//		std::cout << "Creating testship2\n";
	}
	static Ship* get_testship1(){
		///
		///	CLONING testship1
		///
		return testship1->clone();
	}
	static Ship* get_testship2(){
		///
		///	CLONING testship2
		///
		return testship2->clone();

	}

};

//
//
//Ship* shipFactory::testship1 = 0;
//Ship* shipFactory::testship2 = 0;





///
/// Serialize saves the contents of fleet \n
/// To:serializeObjects.txt\n
/// This provides the user the abblity to save their objects\n
///
//void serialize( std::vector<Ship*> fleet){
//	ofstream file;
//	file.open("serializeObjects.txt");
//	for(int i = 0; i < fleet.size(); i++){
//
//		int exitShip;
//		exitShip = fleet[i]->x;
//
//		if(exitShip == 3){
//			file << shipFactory::get_testship2()->x << endl;
//			cout << "Saving a Sub\n";
//		}else{
//			file << shipFactory::get_testship1()->x << endl;
//			cout << "Saving a Battleship\n";
//		}
//
//
//	}
//	file.close();
//
//
//};
///
/// DeSerialize loads the contents of serializeObjects.txt \n
/// To: fleet \n
/// This provides the user the abblity to use their saved objects\n
///
//
//std::vector<Ship*>  deSerialize( ){
//	std::vector<Ship*> fleet;
////	ifstream file;
//	Ship *ship;
//
//	ifstream file("serializeObjects.txt");
//
//	string output;
//	while(std::getline(file, output)){
//		if(output.compare("3") == 0){
//
//
//			ship = shipFactory::get_testship2();
////
//			fleet.push_back(ship);
//			cout << "Loading a Sub\n";
//		}else{
//
//			ship = shipFactory::get_testship1();
//			fleet.push_back(ship);
//			cout << "Loading a Battleship\n";
//		}
//
//	}
//
//	if(ship->x == 0){
//	cout << "     No Fleet to Load\n";
//	cout << "--------------------------------\n";
//	}else{
//	cout << "      Fleet Loaded\n";
//	cout << "--------------------------------\n";
//	}
//	file.close();
//	return fleet;
//};

#endif /* SRC_MAIN_H_ */
