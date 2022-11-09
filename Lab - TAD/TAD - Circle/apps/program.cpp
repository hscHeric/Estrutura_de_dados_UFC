#include <iostream>
#include "../include/ponto.h"
#include "../include/circle.h"

using namespace std;

int main(void)
{
    double centroX, centroY;
    cout << "Digite o valor de x do centro do circulo: ";
    cin >> centroX;
    cout << "Digite o valor de y do centro do circulo: ";
    cin >> centroY;
    Ponto *centro = new Ponto(centroX, centroY);

    double raio;
    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;
    Circle *circulo = new Circle(raio, *centro);

    cout << "Raio do circulo: " << circulo->getRadius() << endl;
    cout << "Centro do circulo: (" << circulo->getCenter().getX() << ", " << circulo->getCenter().getY() << ")" << endl;

    double pontoX, pontoY;
    cout << "Digite o valor de x do ponto: ";
    cin >> pontoX;
    cout << "Digite o valor de y do ponto: ";
    cin >> pontoY;
    Ponto *ponto = new Ponto(pontoX, pontoY);

    if (circulo->interior(*ponto))
    {
        cout << "O ponto esta dentro do circulo" << endl;
    }
    else
    {
        cout << "O ponto nao esta dentro do circulo" << endl;
    }

    delete circulo;
    delete centro;
    delete ponto;
}