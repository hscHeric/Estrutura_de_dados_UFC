#include <iostream>

using namespace std;

void BubbleSort_v2(int *A, int N)
{
    int i, j, aux, troca = 0, iteracoes = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
                troca = 1;
            }
        }
        if (troca == 0)
        {
            break;
        }
        troca = 0;
    }
}

void ComparaVacinasPessoas(int vacinas[], int pessoas[], int n)
{

    BubbleSort_v2(vacinas, n);
    BubbleSort_v2(pessoas, n);
    int Curados = 0;
    for (int i = 0; i < n; i++)
    {
        if (vacinas[i] > pessoas[i])
        {
            Curados++;
        }
    }
    if (Curados == n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main(void)
{
    int n;
    cin >> n;
    int vacinas[n];
    int pessoas[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vacinas[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pessoas[i];
    }
    ComparaVacinasPessoas(vacinas, pessoas, n);
}