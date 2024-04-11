#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "shape.h"

class Circle : public Shape
{
private:
    static const double PI;
    double radius;

public:
    Circle(double radius);
    ~Circle();
    double area() const;
};

#endif /* CIRCLE_H_ */