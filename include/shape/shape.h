#ifndef SHAPE_H_
#define SHAPE_H_

class Shape
{
public:
    Shape();
    virtual ~Shape();
    virtual double area() const = 0;

    // 非抽象类
    // virtual double area() const;
};

#endif /* SHAPE_H_ */