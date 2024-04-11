#include "shape/shape.h"
#include <iostream>

Shape::Shape()
{
    std::cout << "Constructor of Shape" << std::endl;
}

Shape::~Shape()
{
    std::cout << "Destructor of Shape" << std::endl;
}

/* 非抽象类
double Shape::area() const
{
    return 0;
}
*/
