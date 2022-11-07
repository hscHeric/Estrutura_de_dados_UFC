#include <iostream>
#include "../include/utilitario.h"
#include "../include/ordenacao.h"

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
    cout << "\n";


    //BubbleSort
    cout << "BubbleSort: " << endl;
    cout << "  ";
    int* vetorBubbleSort = new int[tamanho];
    CopiaVetor(vetor, vetorBubbleSort, tamanho);
    cout << "BubbleSort: ";
    BubbleSort(vetorBubbleSort, tamanho);
    ImprimeVetor(vetorBubbleSort, tamanho);
    delete[] vetorBubbleSort;

    //BubbleSortRecursivo
    cout << "  ";
    int* vetorBubbleSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorBubbleSortRecursivo, tamanho);
    cout << "BubbleSort Recursivo: ";
    BubbleSortRecursivo(vetorBubbleSortRecursivo, tamanho);
    ImprimeVetor(vetorBubbleSortRecursivo, tamanho);
    delete[] vetorBubbleSortRecursivo;

    //BubbleImparPar
    cout << "  ";
    int* vetorBubbleImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorBubbleImparPar, tamanho);
    cout << "Bubble Impar Par: ";
    BubbleSortImparPar(vetorBubbleImparPar, tamanho);
    ImprimeVetor(vetorBubbleImparPar, tamanho);
    delete[] vetorBubbleImparPar;

    cout << "\n";
    //InsertionSort
    cout << "InsertionSort: " << endl;
    cout << "  ";
    int* vetorInsertionSort = new int[tamanho];
    CopiaVetor(vetor, vetorInsertionSort, tamanho);
    cout << "InsertionSort: ";
    InsertionSort(vetorInsertionSort, tamanho);
    ImprimeVetor(vetorInsertionSort, tamanho);
    delete[] vetorInsertionSort;

    //InsertionSortRecursivo
    cout << "  ";
    int* vetorInsertionSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorInsertionSortRecursivo, tamanho);
    cout << "InsertionSort Recursivo: ";
    InsertionSortRecursivo(vetorInsertionSortRecursivo, tamanho);
    ImprimeVetor(vetorInsertionSortRecursivo, tamanho);
    delete[] vetorInsertionSortRecursivo;

    //InsertionSortImparPar
    cout << "  ";
    int* vetorInsertionSortImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorInsertionSortImparPar, tamanho);
    cout << "InsertionSort Impar Par: ";
    InsertionSortImparPar(vetorInsertionSortImparPar, tamanho);
    ImprimeVetor(vetorInsertionSortImparPar, tamanho);
    delete[] vetorInsertionSortImparPar;

    cout << "\n";

    //SelectionSort
    cout << "SelectionSort: " << endl;
    cout << "  ";
    int* vetorSelectionSort = new int[tamanho];
    CopiaVetor(vetor, vetorSelectionSort, tamanho);
    cout << "SelectionSort: ";
    SelectionSort(vetorSelectionSort, tamanho);
    ImprimeVetor(vetorSelectionSort, tamanho);
    delete[] vetorSelectionSort;

    //SelectionSortRecursivo
    cout << "  ";
    int* vetorSelectionSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorSelectionSortRecursivo, tamanho);
    cout << "SelectionSort Recursivo: ";
    SelectionSortRecursivo(vetorSelectionSortRecursivo, tamanho);
    ImprimeVetor(vetorSelectionSortRecursivo, tamanho);
    delete[] vetorSelectionSortRecursivo;

    //SelectionSortImparPar
    cout << "  ";
    int* vetorSelectionSortImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorSelectionSortImparPar, tamanho);
    cout << "SelectionSort Impar Par: ";
    SelectionSortImparPar(vetorSelectionSortImparPar, tamanho);
    ImprimeVetor(vetorSelectionSortImparPar, tamanho);
    delete[] vetorSelectionSortImparPar;

    cout << "\n";

    //MergeSort
    cout << "MergeSort: " << endl;
    cout << "  ";
    int* vetorMergeSort = new int[tamanho];
    CopiaVetor(vetor, vetorMergeSort, tamanho);
    cout << "MergeSort: ";
    MergeSort(vetorMergeSort, 0, tamanho - 1);
    ImprimeVetor(vetorMergeSort, tamanho);
    delete[] vetorMergeSort;

    //MergeSortInterativo
    cout << "  ";
    int* vetorMergeSortInterativo = new int[tamanho];
    CopiaVetor(vetor, vetorMergeSortInterativo, tamanho);
    cout << "MergeSort Interativo: ";
    MergeSortInterativo(vetorMergeSortInterativo, 0, tamanho - 1);
    ImprimeVetor(vetorMergeSortInterativo, tamanho);
    delete[] vetorMergeSortInterativo;

    //MergeSortImparPar
    cout << "  ";
    int* vetorMergeSortImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorMergeSortImparPar, tamanho);
    cout << "MergeSort Impar Par: ";
    MergeSortImparPar(vetorMergeSortImparPar, 0, tamanho - 1);
    ImprimeVetor(vetorMergeSortImparPar, tamanho);
    delete[] vetorMergeSortImparPar;

    cout << "\n";

    //QuickSort
    cout << "QuickSort: " << endl;
    cout << "  ";
    int* vetorQuickSort = new int[tamanho];
    CopiaVetor(vetor, vetorQuickSort, tamanho);
    cout << "QuickSort: ";
    QuickSort(vetorQuickSort, 0, tamanho - 1);
    ImprimeVetor(vetorQuickSort, tamanho);
    delete[] vetorQuickSort;

    cout << "\n";

    delete[] vetor;

    return 0;
}