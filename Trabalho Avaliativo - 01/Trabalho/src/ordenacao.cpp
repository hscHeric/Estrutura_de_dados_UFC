#include "ordenacao.h"
#include "utilitario.h"

void BubbleSort(int* vetor, int tamanho)
{
    bool trocou = true;
    for (int i = 0; i < tamanho - 1 && trocou; i++)
    {
        trocou = false;
        for (int j = tamanho - 1; j > i; j--)
        {
            if (vetor[j] < vetor[j - 1])
            {
                Troca(&vetor[j], &vetor[j - 1]);
                trocou = true;
            }
        }
    }
}

void BubbleSortRecursivo(int* vetor, int tamanho)
{
    if (tamanho == 1)
    {
        return;
    }
    for (int i = 0; i < tamanho - 1; i++)
    {
        if (vetor[i] > vetor[i + 1])
        {
            Troca(&vetor[i], &vetor[i + 1]);
        }
    }
    BubbleSortRecursivo(vetor, tamanho - 1);
}

void InsertionSort(int* vetor, int tamanho)
{
    int i, j, aux;
    for (i = 1; i < tamanho; i++)
    {
        aux = vetor[i];
        for (j = i; (j > 0) && (aux < vetor[j - 1]); j--)
        {
            vetor[j] = vetor[j - 1];
        }
        vetor[j] = aux;
    }
}

void InsertionSortRecursivo(int* vetor, int tamanho)
{
    if (tamanho <= 1)
    {
        return;
    }
    InsertionSortRecursivo(vetor, tamanho - 1);
    int ultimo = vetor[tamanho - 1];
    int j = tamanho - 2;
    while (j >= 0 && vetor[j] > ultimo)
    {
        vetor[j + 1] = vetor[j];
        j--;
    }
    vetor[j + 1] = ultimo;
}

void SelectionSort(int* vetor, int tamanho)
{
    int i, j, min;
    for (i = 0; i < tamanho - 1; i++)
    {
        min = i;
        for (j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            Troca(&vetor[i], &vetor[min]);
        }
    }
}

void SelectionSortRecursivo(int* vetor, int tamanho)
{
    if (tamanho <= 1)
    {
        return;
    }
    int min = 0;
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > vetor[min])
        {
            min = i;
        }
    }
    if (min != tamanho - 1)
    {
        Troca(&vetor[min], &vetor[tamanho - 1]);
    }
    SelectionSortRecursivo(vetor, tamanho - 1);
}

void Intercala(int* vetor, int incio, int meio, int fim)
{
    int i, j, k;
    int* vetorAux = new int[fim - incio + 1];
    i = incio;
    j = meio + 1;
    k = 0;
    while (i <= meio && j <= fim)
    {
        if (vetor[i] <= vetor[j])
        {
            vetorAux[k] = vetor[i];
            i++;
        }
        else
        {
            vetorAux[k] = vetor[j];
            j++;
        }
        k++;
    }
    while (i <= meio)
    {
        vetorAux[k] = vetor[i];
        i++;
        k++;
    }
    while (j <= fim)
    {
        vetorAux[k] = vetor[j];
        j++;
        k++;
    }
    for (i = incio; i <= fim; i++)
    {
        vetor[i] = vetorAux[i - incio];
    }

    delete[] vetorAux;
}

void MergeSort(int* vetor, int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;
        MergeSort(vetor, inicio, meio);
        MergeSort(vetor, meio + 1, fim);
        Intercala(vetor, inicio, meio, fim);
    }
}

void MergeSortInterativo(int* vetor, int inicio, int fim)
{
    int i, j, k, tam, esq, dir;
    for (tam = 1; tam < fim; tam = 2 * tam)
    {
        for (esq = 0; esq < fim; esq += 2 * tam)
        {
            dir = esq + 2 * tam - 1;
            if (dir > fim)
            {
                dir = fim;
            }
            Intercala(vetor, esq, (esq + dir) / 2, dir);
        }
    }
}

int Separa(int* vetor, int inicio, int fim)
{
    int pivo = vetor[inicio];
    int i = inicio + 1;
    int j = fim;
    while (i <= j)
    {
        if (vetor[i] <= pivo)
        {
            i++;
        }
        else if (pivo < vetor[j])
        {
            j--;
        }
        else
        {
            Troca(&vetor[i], &vetor[j]);
            i++;
            j--;
        }
    }
    vetor[inicio] = vetor[j];
    vetor[j] = pivo;
    return j;
}

void QuickSort(int* vetor, int inicio, int fim)
{
    if (inicio < fim)
    {
        int pivo = Separa(vetor, inicio, fim);
        QuickSort(vetor, inicio, pivo - 1);
        QuickSort(vetor, pivo + 1, fim);
    }
}