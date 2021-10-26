#include <iostream>
#include "Vec.h"

/**
 * This file main.cpp implements the vector operations from the Vec.h
 
 * @param num_args Number of arguments 
 * @param args Number of characters
 
 */

int main(int num_args, char** args) {
	double3 a{ 0,1,2 };
	double3 b{ 0,0,1 };
	std::cout << a - b << std::endl;
	std::cout << dot(a, b) << std::endl;
/**
* @return 
*/
	return 0;

}

