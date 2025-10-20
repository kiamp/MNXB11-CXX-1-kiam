#include "as2.hpp"

namespace homework {

// implement Foo methods here
int Foo::bar() { return 42; }

float Foo::baz() {
  x = 2.71;
  return 3.14;
}

std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
} //used chatgpt to explain structs and methods



bool isVectorEqual(fVector2D vectorOne, fVector2D vectorTwo) {
  if (vectorOne == vectorTwo) {
    std::cout << "Vectors are equal" << std::endl;
    return true;}
  else {
    std::cout << "Vectors are not equal" << std::endl;
    return false;}
}

} // namespace homework