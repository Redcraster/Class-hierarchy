#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A) {}

void IsoscelesTriangle::print() const {
    std::cout << "Равнобедренный треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
}
