#include "circle/point.h"
#include <iostream>

int main()
{
    std::cout << "Input the coordinates of the point" << std::endl;
    double x, y;
    Point *p;
    if (std::cin >> x >> y)
    {
        p = new Point(x, y);
    }
    else
    {
        p = new Point();
    }

    std::cout << "p++: " << (*p)++ << std::endl;
    std::cout << "++p: " << ++(*p) << std::endl;
    std::cout << "p--: " << (*p)-- << std::endl;
    std::cout << "--p: " << --(*p) << std::endl;

    delete p;
    return 0;
}