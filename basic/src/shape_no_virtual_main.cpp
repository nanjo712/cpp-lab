#include "shape_no_virtual/circle.h"
#include "shape_no_virtual/rectangle.h"
#include "shape_no_virtual/square.h"

#include <iostream>

int main()
{\
    double radius;
    std::cout<<"Please input the radius of the circle: \n";
    std::cin>>radius;
    Circle circle(radius);

    double width, height;
    std::cout<<"Please input the width and the height of the rectangle: [w h]\n";
    std::cin>>width>>height;
    Rectangle rectangle(width, height);

    double side;
    std::cout<<"Please input the side of the square: \n";
    std::cin>>side;
    Square square(side);

    std::cout<< "Area of circle: " << circle.area() << std::endl;
    std::cout<< "Area of rectangle: " << rectangle.area() << std::endl;
    std::cout<< "Area of square: " << square.area() << std::endl;

    return 0;
}