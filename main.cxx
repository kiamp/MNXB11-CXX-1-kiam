/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */
#include "as2.hpp"

int main() { 

std::cout << "Assignment 2" << std::endl;

std::cout << homework::Foo().bar() << std::endl;
std::cout << homework::Foo().baz() << std::endl;

homework::Foo f;

f.baz();

std::cout << "x is : " << f.x << std::endl;

std::vector<double> numbers = homework::Foo().quux();

for (double num : numbers) {
 std::cout << num << std::endl; //chatgpt helped with how to print
}

homework::fVector2D vector1(9.4, 4.3);

homework::fVector2D vector2(4.5, 6.7);

std::cout << vector1 + vector2 << std::endl;

homework::isVectorEqual(vector1, vector2);

return 0;}