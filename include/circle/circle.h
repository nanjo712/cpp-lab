#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "point.h"

class Circle
{
private:
    Point center;
    double radius;

public:
    Circle(double r, const Point &c = Point());
    Circle(double r, double x, double y);
    ~Circle();

    static bool isIntersect(const Circle &a, const Circle &b);
};

#endif /* CIRCLE_H_ */