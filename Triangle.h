#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"
#include <iostream>

class Triangle : public Figure {
protected:
    double a, b, c; // стороны
    double A, B, C; // углы

public:
    Triangle(double a, double b, double c, double A, double B, double C);
    virtual ~Triangle() {}
    
    void print() const override;
};

#endif // TRIANGLE_H