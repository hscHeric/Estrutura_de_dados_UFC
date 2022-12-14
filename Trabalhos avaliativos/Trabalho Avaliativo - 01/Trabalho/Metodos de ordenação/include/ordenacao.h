#ifndef ORDENACAO_H
#define ORDENACAO_H

void troca(int* a, int* b);

void BubbleSort(int* vetor, int tamanho);

void BubbleSortRecursivo(int* vetor, int tamanho);

void BubbleSortImparPar(int* vetor, int tamanho);

void InsertionSort(int* vetor, int tamanho);

void InsertionSortRecursivo(int* vetor, int tamanho);

void InsertionSortImparPar(int* vetor, int tamanho);

void SelectionSort(int* vetor, int tamanho);

void SelectionSortRecursivo(int* vetor, int tamanho);

void SelectionSortImparPar(int* vetor, int tamanho);

void Intercala(int* vetor, int incio, int meio, int fim);

void IntercalaImparPar(int* vetor, int incio, int meio, int fim);

void MergeSort(int* vetor, int inicio, int fim);

void MergeSortInterativo(int* vetor, int inicio, int fim);

void MergeSortImparPar(int* vetor, int inicio, int fim);

int Separa(int* vetor, int inicio, int fim);

int SepararImparPar(int* vetor, int inicio, int fim);

void QuickSort(int* vetor, int inicio, int fim);

void QuickSortImparPar(int* vetor, int inicio, int fim);

#endif // ORDENACAO_H