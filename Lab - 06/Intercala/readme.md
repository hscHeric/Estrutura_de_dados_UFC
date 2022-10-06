<h1>Intercala</h1>
Implemente a função void mergeAB(int *v, int *a, int n, int *b, int m) que dados vetores a e b (ordenados) de tamanho n e m faz a intercalação de a e b e armazena no vetor v (ordenado) Suponha que v já está alocado e que tem tamanho maior ou igual a n+m. 

Entrada
A primeira linha contém dois números N e M, o tamanho dos vetores a e b, respectivamente.

A segunda contém N inteiros, representando as entradas do vetor a. A terceira linha contém M inteiros representando as entradas do vetor b.

Saída
Imprima uma única linha com N+M inteiros representando o vetor v.

<h2>Exemplo de Entrada</h2>

5 5

123 146 454 456 542

100 200 248 328 689 

<h2>Exemplo de Saída</h2>

100 123 146 200 248 328 454 456 542 689

<h2>Main da Questão</h2>

```
#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>
#include <stdlib.h>

void mergeAB(int *v, int *a, int n, int *b, int m);

using namespace std;

int main()
{

    int v[100];
    int a[50];
    int b[50];

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    mergeAB(v, a, n, b, m);
    for (int i = 0; i < n + m; i++)
    {
        cout << v[i];
        if (i != n + m - 1)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
```
