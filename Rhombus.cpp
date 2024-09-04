#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(double a, double A, double B)
    : Quadrilateral(a, a, a, a, A, B, A, B) {}

void Rhombus::print() const {
    std::cout << "Ромб:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}

