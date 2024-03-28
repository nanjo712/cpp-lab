#include "circle/circle.h"
#include <iostream>

int main()
{
    std::cout << "Input the radius and center of the first circle: [r x y]\n";
    double r1, x1, y1;
    std::cin >> r1 >> x1 >> y1;
    Circle c1(r1, x1, y1);

    std::cout << "Input the radius and center of the second circle: [r x y]\n";
    double r2, x2, y2;
    std::cin >> r2 >> x2 >> y2;
    Circle c2(r2, x2, y2);

    if (Circle::isIntersect(c1, c2))
    {
        std::cout << "The two circles intersect." << std::endl;
    }
    else
    {
        std::cout << "The two circles do not intersect." << std::endl;
    }

    return 0;
}