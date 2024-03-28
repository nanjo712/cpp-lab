#include "circle/point.h"
#include <cmath>
#include <iostream>

Point::Point(double x,double y): x(x),y(y)
{
    std::cout<<"Constructor of Point"<<std::endl;
}

Point::~Point()
{
    std::cout<<"Destructor of Point"<<std::endl;
}

double Point::calcDistance(const Point& a, const Point& b)
{
    double disX=a.x-b.x;
    double disY=a.y-b.y;
    return hypot(disX,disY);
}
