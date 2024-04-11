#include "shape/rectangle.h"
#include <iostream>

Rectangle::Rectangle(double width, double height) : width(width), height(height)
{
    std::cout << "Constructor of Rectangle" << std::endl;
}

Rectangle::~Rectangle()
{
    std::cout << "Destructor of Rectangle" << std::endl;
}

double Rectangle::area() const
{
    return width * height;
}