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
#include <ostream>
#include <istream>
#include <windows.h>


///
///	Base class Ship
///
class Ship{

	protected:
		int x;

	public:
		///
		/// Get Number of the Ship function
		///
		Ship(){

		}
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

///S
///	class derivered from Base Ship
///
class battleship : public Ship{
	public:
		battleship(int y){
			x = y;
		}
		///
		/// Clone function
		///
		Ship* clone(){
			std::cout << "cloning BATTLESHIP\n";
			return new battleship(*this);
		}
		///
		/// Destructor function
		///
		~battleship(){
			std::cout << "deleting BATTLESHIP\n";
		}
};
///
/// class derivered from Base Ship
///
class sub : public Ship{
	public:
		sub(int y){
			x = y;
		}
		///
		/// Clone function
		///
		Ship* clone(){
			std::cout << "cloning SUB\n";
			return new sub(*this);
		}
		///
		/// Destructor function
		///
		~sub(){
			std::cout << "deleting SUB\n";
		}
};


///
/// Factory class for Ships
///
class shipFactory{
// Static template classes

	static Ship* testship1;
	static Ship* testship2;

public:
	///
	///	init function
	///
	static void init(){
		testship1 = new battleship(5);
		testship2 = new sub(3);

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




std::string readline()
{
	///
	/// Function used for reading user input.
	///
		std::string line;
		std::getline(std::cin, line);
//		std::cout  << line << "\n";
		return line;

}

Ship* shipFactory::testship1 = 0;
Ship* shipFactory::testship2 = 0;


///
/// Main Funtion	\n
/// In the Main the user is prompted to create two \n
/// Ship Objects. These Ships are either type sub class or \n
/// battleship class. Both these type of Objects are derived \n
/// from the Ship Base class.
///
///
	int main(){

		///
		///
		///
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
		bool valid = true;
		while(valid){
		std::cout << "What type of ship do you want for testship1?\n";
		input1 = readline();
		std::cout << "What type of ship do you want for testship2?\n";
		input2 = readline();


//		cloning either SUB or BATTLESHIP
		if(input1 == "SUB" || input1 == "sub"){
//		cloning SUB
			input_num1 = 3;
			ship1 = shipFactory::get_testship2();

		}else{
//		cloning battlesship
			input_num1 = 5;
			ship1 = shipFactory::get_testship1();
		}

		if(input2 == "SUB" || input2 == "sub"){

//		cloning SUB

			input_num2 = 3;
			ship2 = shipFactory::get_testship2();

		}else{
//			cloning battlesship
			input_num2 = 5;
			ship2 = shipFactory::get_testship1();
		}





// deleting local ship.




		std::cout << "Do you want to make them again? YES/NO\n";
		input1 = readline();
			if (input1 == "YES" || input1 == "yes" ){
				valid = true;

				delete ship1;
				delete ship2;
			}else{
				valid = false;
			}


		}

		delete ship1;
		delete ship2;
		std::cout << "Thamks";
		Sleep(2000);



		return 0;



	}


