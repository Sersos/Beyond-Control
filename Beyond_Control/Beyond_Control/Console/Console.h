//
//	Console.h
//	Author: Jannik Lorenz
//	Version: 0.01
//

#include <iostream>

/*
	Macro to write an error to the console
	@param String to write out
*/
#define Error(error) { std::cout << "Error: " << error << std::endl; }

/*
	Function to write a message to the console
	@param String to write out
*/
#define Out(out) { std::cout << out << std::endl; }



