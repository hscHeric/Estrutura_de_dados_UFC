#ifndef CIRCLE_H
#define CIRCLE_H
#include "../include/ponto.h"

class Circle
{
private:
    double radius;
    Ponto center;

public:
    Circle();
    Circle(double radius, Ponto& center);
    ~Circle();
    void setRadius(double r);
    void setCenterX(double x);
    void setCenterY(double y);
    void setCenter(Ponto &p);
    double getRadius();
    Ponto getCenter();
    double area();
    bool interior(Ponto &p);
};

#endif