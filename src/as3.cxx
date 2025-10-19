#include "as3.hpp"

namespace homework {

std::ostream& operator<<(std::ostream& os, Color color) {
        switch (color) {
            case Color::red: os << "Red"; break;
            case Color::green: os << "Green"; break;
            case Color::yellow: os << "Yellow"; break;
            default: os << "Unknown color"; break;
        }
        return os; //from chatpgpt
    }

std::string Fruit::getName() {
    return name_;
}

Color Fruit::getColor() {
    return col_;
}



} // namespace homework

