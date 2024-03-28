#include "shape/shape.h"
#include "shape/circle.h"
#include "shape/rectangle.h"
#include "shape/square.h"
#include <iostream>

void printArea(Shape *shape)
{
    std::cout<<"Area: "<<shape->area()<<std::endl;
}

int main()
{
    double radius;
    std::cout<<"Please input the radius of the circle: \n";
    std::cin>>radius;
    Shape *circle = new Circle(radius);

    double width, height;
    std::cout<<"Please input the width and the height of the rectangle: [w h]\n";
    std::cin>>width>>height;
    Shape *rectangle = new Rectangle(width, height);

    double side;
    std::cout<<"Please input the side of the square: \n";
    std::cin>>side;
    Shape *square = new Square(side);

    printArea(circle);
    printArea(rectangle);
    printArea(square);

    delete circle;
    delete rectangle;
    delete square;
    return 0;
}