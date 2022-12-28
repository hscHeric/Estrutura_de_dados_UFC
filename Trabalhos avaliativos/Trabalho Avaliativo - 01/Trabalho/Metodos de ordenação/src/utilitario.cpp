#include "../include/utilitario.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void Troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void GerarVetorAleatorio(int *vetor, int tamanho)
{
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 100;
    }
}

void ImprimeVetor(int *vetor, int tamanho)
{
    if (tamanho <= 100)
    {
        for (int i = 0; i < tamanho; i++)
        {
            cout << vetor[i] << " ";
        }
        cout << endl;
    }
}

void CopiaVetor(int *vetor, int *vetorCopia, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetorCopia[i] = vetor[i];
    }
}