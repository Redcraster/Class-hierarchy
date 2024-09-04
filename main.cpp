#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_info(const Figure* figure) {
    figure->print();
    std::cout << std::endl;
}

int main() {
    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(&triangle);

    RightTriangle right_triangle(10, 20, 30, 50, 40);
    print_info(&right_triangle);

    // Обновленный вызов конструктора
    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60); // исправлено на 4 параметра
    print_info(&isosceles_triangle);

    EquilateralTriangle equilateral_triangle(30);
    print_info(&equilateral_triangle);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&quadrilateral);

    Rectangle rectangle(10, 20);
    print_info(&rectangle);

    Square square(20);
    print_info(&square);

    Parallelogram parallelogram(20, 30, 30, 40);
    print_info(&parallelogram);

    Rhombus rhombus(30, 30, 40);
    print_info(&rhombus);

    return 0;
}

