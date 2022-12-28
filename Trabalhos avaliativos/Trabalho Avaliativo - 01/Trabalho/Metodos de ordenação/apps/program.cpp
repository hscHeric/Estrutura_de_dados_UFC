#include <iostream>
#include "../include/utilitario.h"
#include "../include/ordenacao.h"
#include  <chrono>

using namespace std::chrono;
using namespace std;

int main(void)
{
    auto startMain = high_resolution_clock::now();
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
    auto start = high_resolution_clock::now();
    BubbleSort(vetorBubbleSort, tamanho);
    auto end = high_resolution_clock::now();
    ImprimeVetor(vetorBubbleSort, tamanho);
    auto elapsed = end - start;
    cout << "       " << "Tempo de execucao do BubbleSort: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorBubbleSort;

    //BubbleSortRecursivo
    cout << "  ";
    int* vetorBubbleSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorBubbleSortRecursivo, tamanho);
    cout << "BubbleSort Recursivo: ";
    start = high_resolution_clock::now();
    BubbleSortRecursivo(vetorBubbleSortRecursivo, tamanho);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorBubbleSortRecursivo, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do BubbleSort Recursivo: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorBubbleSortRecursivo;

    //BubbleImparPar
    cout << "  ";
    int* vetorBubbleImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorBubbleImparPar, tamanho);
    cout << "Bubble Impar Par: ";
    start = high_resolution_clock::now();
    BubbleSortImparPar(vetorBubbleImparPar, tamanho);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorBubbleImparPar, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do Bubble Impar Par: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorBubbleImparPar;

    cout << "\n";
    //InsertionSort
    cout << "InsertionSort: " << endl;
    cout << "  ";
    int* vetorInsertionSort = new int[tamanho];
    CopiaVetor(vetor, vetorInsertionSort, tamanho);
    cout << "InsertionSort: ";
    start = high_resolution_clock::now();
    InsertionSort(vetorInsertionSort, tamanho);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorInsertionSort, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do InsertionSort: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorInsertionSort;

    //InsertionSortRecursivo
    cout << "  ";
    int* vetorInsertionSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorInsertionSortRecursivo, tamanho);
    cout << "InsertionSort Recursivo: ";
    start = high_resolution_clock::now();
    InsertionSortRecursivo(vetorInsertionSortRecursivo, tamanho);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorInsertionSortRecursivo, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do InsertionSort Recursivo: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorInsertionSortRecursivo;

    //InsertionSortImparPar
    cout << "  ";
    int* vetorInsertionSortImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorInsertionSortImparPar, tamanho);
    cout << "InsertionSort Impar Par: ";
    start = high_resolution_clock::now();
    InsertionSortImparPar(vetorInsertionSortImparPar, tamanho);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorInsertionSortImparPar, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do InsertionSort Impar Par: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorInsertionSortImparPar;

    cout << "\n";

    //SelectionSort
    cout << "SelectionSort: " << endl;
    cout << "  ";
    int* vetorSelectionSort = new int[tamanho];
    CopiaVetor(vetor, vetorSelectionSort, tamanho);
    cout << "SelectionSort: ";
    start = high_resolution_clock::now();
    SelectionSort(vetorSelectionSort, tamanho);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorSelectionSort, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do SelectionSort: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorSelectionSort;

    //SelectionSortRecursivo
    cout << "  ";
    int* vetorSelectionSortRecursivo = new int[tamanho];
    CopiaVetor(vetor, vetorSelectionSortRecursivo, tamanho);
    cout << "SelectionSort Recursivo: ";
    start = high_resolution_clock::now();
    SelectionSortRecursivo(vetorSelectionSortRecursivo, tamanho);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorSelectionSortRecursivo, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do SelectionSort Recursivo: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorSelectionSortRecursivo;

    //SelectionSortImparPar
    cout << "  ";
    int* vetorSelectionSortImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorSelectionSortImparPar, tamanho);
    cout << "SelectionSort Impar Par: ";
    start = high_resolution_clock::now();
    SelectionSortImparPar(vetorSelectionSortImparPar, tamanho);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorSelectionSortImparPar, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do SelectionSort Impar Par: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorSelectionSortImparPar;

    cout << "\n";

    //MergeSort
    cout << "MergeSort: " << endl;
    cout << "  ";
    int* vetorMergeSort = new int[tamanho];
    CopiaVetor(vetor, vetorMergeSort, tamanho);
    cout << "MergeSort: ";
    start = high_resolution_clock::now();
    MergeSort(vetorMergeSort, 0, tamanho - 1);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorMergeSort, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do MergeSort: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorMergeSort;

    //MergeSortInterativo
    cout << "  ";
    int* vetorMergeSortInterativo = new int[tamanho];
    CopiaVetor(vetor, vetorMergeSortInterativo, tamanho);
    cout << "MergeSort Interativo: ";
    start = high_resolution_clock::now();
    MergeSortInterativo(vetorMergeSortInterativo, 0, tamanho - 1);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorMergeSortInterativo, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do MergeSort Interativo: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorMergeSortInterativo;

    //MergeSortImparPar
    cout << "  ";
    int* vetorMergeSortImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorMergeSortImparPar, tamanho);
    cout << "MergeSort Impar Par: ";
    start = high_resolution_clock::now();
    MergeSortImparPar(vetorMergeSortImparPar, 0, tamanho - 1);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorMergeSortImparPar, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do MergeSort Impar Par: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorMergeSortImparPar;

    cout << "\n";

    //QuickSort
    cout << "QuickSort: " << endl;
    cout << "  ";
    int* vetorQuickSort = new int[tamanho];
    CopiaVetor(vetor, vetorQuickSort, tamanho);
    cout << "QuickSort: ";
    start = high_resolution_clock::now();
    QuickSort(vetorQuickSort, 0, tamanho - 1);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorQuickSort, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do QuickSort: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorQuickSort;

    //QuickSortImparPar
    cout << "  ";
    int* vetorQuickSortImparPar = new int[tamanho];
    CopiaVetor(vetor, vetorQuickSortImparPar, tamanho);
    cout << "QuickSort Impar Par: ";
    start = high_resolution_clock::now();
    QuickSortImparPar(vetorQuickSortImparPar, 0, tamanho - 1);
    end = high_resolution_clock::now();
    ImprimeVetor(vetorQuickSortImparPar, tamanho);
    elapsed = end - start;
    cout << "       " << "Tempo de execucao do QuickSort Impar Par: " << duration_cast<nanoseconds>(elapsed).count() << " Nanosegundos" << endl;
    delete[] vetorQuickSortImparPar;

    cout << "\n";

    delete[] vetor;
    auto endMain = high_resolution_clock::now();
    auto elapsedMain = endMain - startMain;
    cout << "Tempo total de execucao: " << duration_cast<nanoseconds>(elapsedMain).count() << " Nanosegundos" << endl;


    return 0;
}