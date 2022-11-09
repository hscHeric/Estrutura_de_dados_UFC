#ifndef PONTO_H
#define PONTO_H

class Ponto
{
private:
    double x;
    double y;

public:
    Ponto();

    Ponto(double x, double y);

    ~Ponto();

    double getX();
    double getY();

    void setX(double x);
    void setY(double y);

    double distancia(Ponto *p);
};

#endif