#include "circle/point.h"
#include <cmath>

Point::Point(double x,double y): x(x),y(y)
{

}

double Point::calcDistance(const Point& a, const Point& b)
{
    double disX=a.x-b.x;
    double disY=a.y-b.y;
    return hypot(disX,disY);
}
