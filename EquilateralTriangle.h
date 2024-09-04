#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double a);
    void print() const override;
};

#endif // EQUILATERALTRIANGLE_H