#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

using namespace std;
class Matrix
{
private:
    int linhas;
    int colunas;
    int **data;

public:
    Matrix(int linhas, int colunas)
    {
        this->linhas = linhas;
        this->colunas = colunas;
        data = new int *[linhas];
        for (int i = 0; i < linhas; i++)
        {
            data[i] = new int[colunas];
        }
    }
    ~Matrix()
    {
        for (int i = 0; i < linhas; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    }
    int getValor(int linha, int coluna)
    {
        return data[linha][coluna];
    }
    void setValor(int linha, int coluna, double valor)
    {
        data[linha][coluna] = valor;
    }
    int getLinhas()
    {
        return linhas;
    }
    int getColunas()
    {
        return colunas;
    }
    void imprime()
    {
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    bool igual(Matrix &m)
    {
        if (linhas != m.linhas || colunas != m.colunas)
        {
            return false;
        }
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if (data[i][j] != m.data[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

void gerarMatriz(Matrix &m);
#endif