#include <iostream>
using namespace std;

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto p1;
    Ponto p2;
} Retangulo;


int main() {
    Retangulo retangulo;
    Ponto p;

    cin >> retangulo.p1.x >> retangulo.p1.y >> retangulo.p2.x >> retangulo.p2.y >> p.x >> p.y;

    if ((p.x >= retangulo.p1.x && p.x <= retangulo.p2.x) || (p.x <= retangulo.p1.x && p.x >= retangulo.p2.x)) {
        if ((p.y >= retangulo.p1.y && p.y <= retangulo.p2.y) || (p.y <= retangulo.p1.y && p.y >= retangulo.p2.y)) {
            cout << "Ponto dentro do retângulo";
        }
        else {
            cout << "Ponto fora do retângulo";
        }
    }
    else {
        cout << "Ponto fora do retângulo";
    }
}