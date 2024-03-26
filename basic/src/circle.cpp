#include "circle/circle.h"

Circle::Circle(double r, Point c): radius(r),center(c)
{

}

Circle::Circle(double r, double x, double y): radius(r),center(x,y)
{

}

bool Circle::isIntersect(const Circle& a,const Circle& b)
{
    return Point::calcDistance(a.center,b.center)<=a.radius+b.radius;
}

