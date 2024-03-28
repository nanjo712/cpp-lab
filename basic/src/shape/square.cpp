#include "shape/square.h"
#include <iostream>

Square::Square(double side): Rectangle(side, side)
{
    std::cout<< "Constructor of Square" << std::endl;
}

Square::~Square()
{
    std::cout<< "Destructor of Square" << std::endl;
}

