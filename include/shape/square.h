#ifndef SQUARE_H_
#define SQUARE_H_

#include "rectangle.h"

class Square : public Rectangle
{
public:
    Square(double side);
    ~Square();
};

#endif /* SQUARE_H_ */