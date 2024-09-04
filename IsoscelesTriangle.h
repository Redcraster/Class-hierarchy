#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B); // 4 параметра
    void print() const override;
};

#endif // ISOSCELESTRIANGLE_H

