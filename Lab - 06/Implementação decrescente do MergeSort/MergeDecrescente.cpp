#include <iostream>

using namespace std;

void intercala(int* A, int p, int q, int r) {
    int* W = new int[r - p + 1];
    int i = p;
    int j = q + 1;
    int k = 0;

    while (i <= q && j <= r) {
        if (A[i] >= A[j]) {
            W[k] = A[i];
            i++;
        }
        else {
            W[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= q)
    {
        W[k] = A[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        W[k] = A[j];
        j++;
        k++;
    }
    for (int i = p; i <= r; i++)
    {
        A[i] = W[i - p];
    }

    delete[] W;
}

//MergeSort decrescente interativo
void mergeSortDecrescente(int* A, int n) {
    int p, q, r;
    for (int i = 1; i < n; i = 2 * i) {
        for (int j = 0; j < n - 1; j = j + 2 * i) {
            p = j;
            q = j + i - 1;
            r = j + 2 * i - 1;
            if (q >= n - 1) {
                q = n - 1;
            }
            if (r >= n - 1) {
                r = n - 1;
            }
            intercala(A, p, q, r);
        }
    }
}


int main() {
    int A[] = { 1, 2, 3, 4, 5 };
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";

    }
    cout << endl;

    mergeSortDecrescente(A, n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}