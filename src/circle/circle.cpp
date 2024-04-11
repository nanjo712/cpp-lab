#include "circle/circle.h"
#include <iostream>

Circle::Circle(double r, Point c): radius(r),center(c)
{
    std::cout<<"Constructor of Circle"<<std::endl;
}

Circle::Circle(double r, double x, double y): radius(r),center(x,y)
{
    std::cout<<"Constructor of Circle"<<std::endl;
}

Circle::~Circle()
{
    std::cout<<"Destructor of Circle"<<std::endl;
}

bool Circle::isIntersect(const Circle& a,const Circle& b)
{
    return Point::calcDistance(a.center,b.center)<=a.radius+b.radius;
}



