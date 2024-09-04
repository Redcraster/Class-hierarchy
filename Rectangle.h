#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(double a, double b);
    virtual ~Rectangle() {}

    void print() const override;
};

#endif // RECTANGLE_H

