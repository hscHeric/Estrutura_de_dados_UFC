#include <iostream>

using namespace std;

void bubbleSort(int vetor[], int tamanho)
{
    int aux;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void copiarVetor(int *vetor, int *vetorAuxiliar, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetorAuxiliar[i] = vetor[i];
    }
}

void procurarIndice(int *vetor, int *vetorAuxiliar, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (vetor[i] == vetorAuxiliar[j])
            {
                if (i == tamanho - 1)
                {
                    cout << j << endl;
                }
                else
                {
                    cout << j << " ";
                }
            }
        }
    }
}

int main(void)
{
    int tamanhoVetor = 0;
    cin >> tamanhoVetor;

    int vetor[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; i++)
    {
        cin >> vetor[i];
    }

    int vetorAuxiliar[tamanhoVetor];
    copiarVetor(vetor, vetorAuxiliar, tamanhoVetor);

    bubbleSort(vetorAuxiliar, tamanhoVetor);

    procurarIndice(vetorAuxiliar, vetor, tamanhoVetor);

    return 0;
}