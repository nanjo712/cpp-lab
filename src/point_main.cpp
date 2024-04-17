#include "circle/point.h"
#include <iostream>

int main()
{
    double x, y;

    std::cout << "Input the coordinates of the point:" << std::endl;
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