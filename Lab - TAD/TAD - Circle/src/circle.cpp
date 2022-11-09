#include <iostream>
#include <cmath>
#include "../include/circle.h"
#include "../include/ponto.h"

using namespace std;

Circle::Circle()
{
    radius = 0;
    center.setX(0);
    center.setY(0);
}

Circle::Circle(double radius, Ponto& center)
{
    this->radius = radius;
    this->center = center;
}

Circle :: ~Circle()
{
}

void Circle :: setRadius(double r)
{
    radius = r;
}

void Circle :: setCenterX(double x)
{
    center.setX(x);
}

void Circle :: setCenterY(double y)
{
    center.setY(y);
}

void Circle :: setCenter(Ponto &p)
{
    center = p;
}

double Circle :: getRadius()
{
    return radius;
}

Ponto Circle :: getCenter()
{
    return center;
}

double Circle :: area()
{
    return 3.1415 * pow(radius, 2);
}

bool Circle :: interior(Ponto &p)
{
    return center.distancia(&p) <= radius;
}
