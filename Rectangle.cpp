#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double a, double b)
    : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {}

void Rectangle::print() const {
    std::cout << "Прямоугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}


