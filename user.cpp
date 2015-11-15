/*
 * user.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: Zachary Seselja
 */
#include "Ship.h"

#include <iostream>	// std::cout
#include <string>

int main(){

	char *input;
	std::cout << "What type of ship do you want?";

	for (std::string line; std::getline(std::cin, line);) {
	        input = line;
	    }
	return 0;


}

