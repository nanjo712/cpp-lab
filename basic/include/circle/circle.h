#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "point.h"

class Circle
{
private:
    Point center;
    double radius;
public:
    Circle(double r, Point c=Point());
    Circle(double r, double x, double y);
    ~Circle()=default;

    static bool isIntersect(const Circle& a,const Circle& b);
}

#endif /* CIRCLE_H_ */