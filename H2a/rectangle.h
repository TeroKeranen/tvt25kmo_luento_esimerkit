#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle
{
public:
    Rectangle();



    void setWidth(double newWidth);

    void setHeight(double newHeight);

    double getArea();
    double getCircum();

private:
    double width;
    double height;
};

#endif // RECTANGLE_H
