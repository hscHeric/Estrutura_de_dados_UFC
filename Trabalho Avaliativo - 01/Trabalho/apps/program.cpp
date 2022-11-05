#include <iostream>
#include "ordenacao.h"
#include "utilitario.h"

using namespace std;

int main(void)
{
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    int* vetor = new int[tamanho];

    GerarVetorAleatorio(vetor, tamanho); //Adiciona ao vetor uma sequencia de numeros aleatorios de 0 a 100 gerados pelo rand();

    cout << "Vetor antes de ser ordenado: ";
    ImprimeVetor(vetor, tamanho); //Imprime os valores iniciais do vetor antes da ordenacao

    //BubbleSort
    int* vetorBubbleSort = new int[tamanho];
    CopiaVetor(vetor, vetorBubbleSort, tamanho);
    cout << "BubbleSort: ";
    BubbleSort(vetorBubbleSort, tamanho);
    ImprimeVetor(vetorBubbleSort, tamanho);
    delete[] vetorBubbleSort;

    //BubbleSortRecursivo
    int* vetorBubbleSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorBubbleSortRecursivo, tamanho);
    cout << "BubbleSort Recursivo: ";
    BubbleSortRecursivo(vetorBubbleSortRecursivo, tamanho);
    ImprimeVetor(vetorBubbleSortRecursivo, tamanho);
    delete[] vetorBubbleSortRecursivo;

    //InsertionSort
    int* vetorInsertionSort = new int[tamanho];
    CopiaVetor(vetor, vetorInsertionSort, tamanho);
    cout << "InsertionSort: ";
    InsertionSort(vetorInsertionSort, tamanho);
    ImprimeVetor(vetorInsertionSort, tamanho);
    delete[] vetorInsertionSort;

    //InsertionSortRecursivo
    int* vetorInsertionSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorInsertionSortRecursivo, tamanho);
    cout << "InsertionSort Recursivo: ";
    InsertionSortRecursivo(vetorInsertionSortRecursivo, tamanho);
    ImprimeVetor(vetorInsertionSortRecursivo, tamanho);
    delete[] vetorInsertionSortRecursivo;

    //SelectionSort
    int* vetorSelectionSort = new int[tamanho];
    CopiaVetor(vetor, vetorSelectionSort, tamanho);
    cout << "SelectionSort: ";
    SelectionSort(vetorSelectionSort, tamanho);
    ImprimeVetor(vetorSelectionSort, tamanho);
    delete[] vetorSelectionSort;

    //SelectionSortRecursivo
    int* vetorSelectionSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorSelectionSortRecursivo, tamanho);
    cout << "SelectionSort Recursivo: ";
    SelectionSortRecursivo(vetorSelectionSortRecursivo, tamanho);
    ImprimeVetor(vetorSelectionSortRecursivo, tamanho);
    delete[] vetorSelectionSortRecursivo;

    //MergeSort
    int* vetorMergeSort = new int[tamanho];
    CopiaVetor(vetor, vetorMergeSort, tamanho);
    cout << "MergeSort: ";
    MergeSort(vetorMergeSort, 0, tamanho - 1);
    ImprimeVetor(vetorMergeSort, tamanho);
    delete[] vetorMergeSort;

    //MergeSortInterativo
    int* vetorMergeSortInterativo = new int[tamanho];
    CopiaVetor(vetor, vetorMergeSortInterativo, tamanho);
    cout << "MergeSort Interativo: ";
    MergeSortInterativo(vetorMergeSortInterativo, 0, tamanho - 1);
    ImprimeVetor(vetorMergeSortInterativo, tamanho);
    delete[] vetorMergeSortInterativo;

    //QuickSort
    int* vetorQuickSort = new int[tamanho];
    CopiaVetor(vetor, vetorQuickSort, tamanho);
    cout << "QuickSort: ";
    QuickSort(vetorQuickSort, 0, tamanho - 1);
    ImprimeVetor(vetorQuickSort, tamanho);
    delete[] vetorQuickSort;

    delete[] vetor;

    return 0;
}