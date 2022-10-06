#include <iostream>

using namespace std;

int RetornaQuantidadeRepetidos(int *vetor, int tamanho)
{
    int quantidade = 0;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[i] == vetor[j])
            {
                quantidade++;
                break;
            }
        }
    }
    return quantidade;
}

int main(void)
{
    int tamanho;
    cin >> tamanho;

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    cout << RetornaQuantidadeRepetidos(vetor, tamanho) << endl;
}