#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B);
    void print() const override;
};

#endif // RIGHTTRIANGLE_H
