#pragma once

#include <string>
#include <iostream>

namespace homework {
// Hint: Lecture 5 slides

// As 3.1 Lets create our own type in C++ and use it for a custom class of
// fruits 
// (a) TO DO: Implement your type (Hint: enum class). Name it "Color" and add three colors:
// red, green, yellow
enum class Color { red, green, yellow};

std::ostream& operator<<(std::ostream& os, Color color); 

// (b) TO DO: Implement a class called "Fruit" that has a constructor taking a
// string and a "Color" and two methods: "getName" and "getColor" Also implement
// a pure virtual method "getTaste" that returns a string

class Fruit {
public:
    Fruit() : name_("noName"), col_(Color::yellow) {} //wouldn't compile, chatgpt gave default constructor

    Fruit(std::string name, Color col) : name_(name), col_(col) {}

    std::string getName();

    Color getColor();

    virtual std::string getTaste() = 0;

private:

    std::string name_;
    Color col_;

};
// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor
class Apple : public Fruit {
public:
    Apple() {}

    Apple(Color col) : Fruit("apple", col) {}
        
    std::string getTaste() override {
        return "sweet";
    }
};
} // namespace homework
