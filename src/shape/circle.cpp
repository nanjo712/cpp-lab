#include "shape/circle.h"
#include <iostream>

const double Circle::PI = 3.14159;

Circle::Circle(double radius) : radius(radius)
{
    std::cout << "Constructor of Circle" << std::endl;
}

Circle::~Circle()
{
    std::cout << "Destructor of Circle" << std::endl;
}

double Circle::area() const
{
    return PI * radius * radius;
}
