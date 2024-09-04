#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Figure.h"

class Quadrilateral : public Figure {
protected:
    double a, b, c, d; // Длины сторон
    double A, B, C, D; // Углы

public:
    Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D);
    virtual ~Quadrilateral() {}

    void print() const override;
};

#endif // QUADRILATERAL_H


