/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as3.hpp"

int main() { 

std::cout << "Assignment 3" << std::endl;

homework::Apple apple1(homework::Color::green);

std::cout << apple1.getName() << std::endl;

std::cout << apple1.getColor() << std::endl;

std::cout << apple1.getTaste() << std::endl;

return 0;
}