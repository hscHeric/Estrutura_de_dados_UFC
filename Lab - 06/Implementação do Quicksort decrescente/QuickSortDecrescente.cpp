#include <iostream>

using namespace std;
//Função separa do Quicksort decrescente
int separa(int A[], int p, int r)
{
    int c = A[p];
    int i = p + 1, j = r;
    int t;
    while (i <= j)
    {
        if (A[i] >= c)
            i++;
        else if (c > A[j])
            j--;
        else
        {
            t = A[i];
            A[i] = A[j];
            A[j] = t;
            i++;
            j--;
        }
    }
    t = A[p];
    A[p] = A[j];
    A[j] = t;
    return j;
}

// QuickSort decrescente recursivo
void quickSortDecrescente(int A[], int p, int r)
{
    if (p < r)
    {
        int j = separa(A, p, r);
        quickSortDecrescente(A, p, j - 1);
        quickSortDecrescente(A, j + 1, r);
    }
}

int main(void)
{
    int V[] = { 1, 2, 3, 4, 5 };

    for (int var : V)
    {
        cout << var << " ";
    }

    cout << endl;

    quickSortDecrescente(V, 0, 4);

    for (int var : V)
    {
        cout << var << " ";
    }
    return 0;
}