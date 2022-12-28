#include <iostream>
#include <cmath>
#include "../include/ponto.h"

Ponto :: Ponto()
{
    x = y = 0;
}

Ponto :: Ponto(double x, double y)
{
    this->x = x;
    this->y = y;
}

Ponto:: ~Ponto()
{
}

double Ponto:: getX()
{
    return x;
}

double Ponto:: getY()
{
    return y;
}

void Ponto:: setX(double x)
{
    this->x = x;
}

void Ponto::setY(double y)
{
    this->y = y;
}

double Ponto::distancia(Ponto*p)
{
    double dx = pow(x - p->x, 2);
    double dy = pow(y - p->y, 2);
    return sqrt(dx + dy);
}
