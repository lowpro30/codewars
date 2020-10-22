/*
 * =====================================================================================
 *
 *       Filename:  ReturningStrings.cpp
 *
 *    Description: Make a function that will return a greeting statement that uses
 *    		   an input; your program should return, 
 *    		   "Hello, <name> how are you doing today?".  
 *
 *        Version:  1.0
 *        Created:  10/21/2020 23:04:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  David Elliott (DE), lowpro30@gmail.com
 *        Company:  David Elliott
 *
 * =====================================================================================
 */

#include <iostream>

// constructs a copy of string
std::string greet(const std::string& n){
	return "Hello, " + n + " How are you doing today?";
}

int main(){
	std::string name;
	std::cout << "Enter the name to return: ";
	std::cin >> name;
	greet(name);
}
