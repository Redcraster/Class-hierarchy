#ifndef SQUARE_H
#define SQUARE_H

#include "Quadrilateral.h"

class Square : public Quadrilateral { // Явное наследование от Quadrilateral
public:
    Square(double a);
    virtual ~Square() {}
    void print() const override;
};

#endif // SQUARE_H
