#ifndef POINT_H_
#define POINT_H_

#include <iostream>

class Point
{
private:
    double x,y;
public:
    Point(double x=0,double y=0);
    ~Point();
    static double calcDistance(const Point &x,const Point &y);

    Point& operator++();
    Point& operator--();
    Point& operator++(int);
    Point& operator--(int);

    friend std::ostream& operator<<(std::ostream& os,const Point& p);
};

#endif /* POINT_H_ */