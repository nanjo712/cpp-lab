#include "shape_no_virtual/circle.h"
#include "shape_no_virtual/rectangle.h"
#include "shape_no_virtual/square.h"

#include <iostream>

int main()
{
    Circle circle(1.0);
    Rectangle rectangle(1.0, 2.0);
    Square square(1.0);

    std::cout<< "Area of circle: " << circle.area() << std::endl;
    std::cout<< "Area of rectangle: " << rectangle.area() << std::endl;
    std::cout<< "Area of square: " << square.area() << std::endl;
    
    return 0;
}