#include <iostream>
#include "../include/matrix.h"

using namespace std;

int main(void)
{
    int linhas, colunas;
    cout << "Digite o numero de linhas: ";
    cin >> linhas;
    cout << "Digite o numero de colunas: ";
    cin >> colunas;

    cout << endl;
    Matrix m1(linhas, colunas);

    for (int i = 0; i < m1.getLinhas(); i++)
    {
        for (int j = 0; j < m1.getColunas(); j++)
        {
            double valor;
            cout << "Digite o valor da posicao " << i << " " << j << ": ";
            cin >> valor;
            m1.setValor(i, j, valor);
        }
    }
    cout << endl;
    cout << "Matriz 1:" << endl;
    m1.imprime();

    cout << endl;
    cout << "Digite o numero de linhas: ";
    cin >> linhas;
    cout << "Digite o numero de colunas: ";
    cin >> colunas;

    cout << endl;
    Matrix m2(linhas, colunas);

    for (int i = 0; i < m2.getLinhas(); i++)
    {
        for (int j = 0; j < m2.getColunas(); j++)
        {
            double valor;
            cout << "Digite o valor da posicao " << i << " " << j << ": ";
            cin >> valor;
            m2.setValor(i, j, valor);
        }
    }

    cout << endl;
    cout << "Matriz 2:" << endl;
    m2.imprime();

    if (m1.igual(m2))
    {
        cout << "As matrizes sao iguais" << endl;
    }
    else
    {
        cout << "As matrizes sao diferentes" << endl;
    }
    return 0;

    cout << endl;
}