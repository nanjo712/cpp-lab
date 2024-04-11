#include "circle/point.h"
#include <iostream>

int main()
{
    std::cout<<"Input the coordinates of the point"<<std::endl;
    double x,y;
    std::cin>>x>>y;
    Point p(x,y);
    
    std::cout<<"p++: "<<p++<<std::endl;
    std::cout<<"++p: "<<++p<<std::endl;
    std::cout<<"p--: "<<p--<<std::endl;
    std::cout<<"--p: "<<--p<<std::endl;
    return 0;
}