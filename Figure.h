#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
public:
    virtual ~Figure() = default;
    virtual void print() const = 0;
};

#endif // FIGURE_H
