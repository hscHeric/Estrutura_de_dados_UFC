#include <iostream>
#include <iomanip>
using namespace std;

typedef struct {
    float x;
    float y;
} Ponto;


void troca(Ponto* ponto01, Ponto* ponto02) {
    Ponto aux;

    aux = *ponto01;
    *ponto01 = *ponto02;
    *ponto02 = aux;
}


int main() {
    Ponto pontoUm, ponto02;
    cin >> pontoUm.x >> pontoUm.y >> ponto02.x >> ponto02.y;

    troca(&pontoUm, &ponto02);

    cout << fixed << setprecision(1) << pontoUm.x << "-" << pontoUm.y << endl;
    cout << ponto02.x << "-" << ponto02.y << endl;
}