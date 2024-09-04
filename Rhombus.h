#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Quadrilateral.h"

class Rhombus : public Quadrilateral { // Явное наследование от Quadrilateral
public:
    Rhombus(double a, double A, double B);
    virtual ~Rhombus() {}
    
    void print() const override;
};

#endif // RHOMBUS_H

