#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double a, double b, double A, double B);
    virtual ~Parallelogram() {}

    void print() const override;
};

#endif // PARALLELOGRAM_H
