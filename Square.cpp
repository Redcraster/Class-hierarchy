#include "Square.h"
#include <iostream>

Square::Square(double a)
    : Quadrilateral(a, a, a, a, 90, 90, 90, 90) {}

void Square::print() const {
    std::cout << "Квадрат:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}

