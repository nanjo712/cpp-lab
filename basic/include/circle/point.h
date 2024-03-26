#ifndef POINT_H_
#define POINT_H_

class Point
{
private:
    double x,y;
public:
    Point(double x=0,double y=0);
    ~Point() = default;
    static double calcDistance(const Point &x,const Point &y);
};

#endif /* POINT_H_ */