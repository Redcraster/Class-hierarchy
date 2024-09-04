#include "EquilateralTriangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(double a)
    : Triangle(a, a, a, 60, 60, 60) {}

void EquilateralTriangle::print() const {
    std::cout << "Равносторонний треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
}

