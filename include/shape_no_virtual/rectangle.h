#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "shape.h"

class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double width, double height);
    virtual ~Rectangle();
    double area() const;
};

#endif /* RECTANGLE_H_ */
