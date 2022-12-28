#include <iostream>
#include "../include/matrix.h"
using namespace std;

void gerarMatriz(Matrix &m){
    for (int i = 0; i < m.getLinhas(); i++)
    {
        for (int j = 0; j < m.getColunas(); j++)
        {
            m.setValor(i, j, i + j);
        }
    }
}