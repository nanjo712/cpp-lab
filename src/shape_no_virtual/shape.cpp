#include "shape_no_virtual/shape.h"
#include <iostream>

Shape::Shape()
{
    std::cout << "Constructor of Shape" << std::endl;
}

Shape::~Shape()
{
    std::cout << "Destructor of Shape" << std::endl;
}

double Shape::area() const
{
    return 0.0;
}