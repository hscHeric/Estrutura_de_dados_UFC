#include <iostream>
#include "./Include/Stack.h"
#include "./Include/Queue.h"

using namespace std;

// Explicações:
/**
 * 1. A função EPrimo verifica se um número é primo ou não.
 * 2. A função fatoracaoPrima recebe um número e retorna uma fila com a fatoração prima desse número.
 * 3. A função main recebe um número e imprime a fatoração prima desse número.
 */

bool EPrimo(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
        if (n % i == 0)
        {
            return false;
        }
    return true;
}

Queue *fatoracaoPrima(int n)
{
    Queue *fila = new Queue();
    Stack *pilha = new Stack();
    int i = 2;
    while (n > 1)
    {
        if (n % i == 0 && EPrimo(i))
        {
            pilha->push(i);
            n = n / i;
        }
        else
        {
            i++;
        }
    }
    while (!pilha->isEmpty())
    {
        fila->push(pilha->pop());
    }
    return fila;
}
int main()
{
    cout << "Digite um numero: ";
    int n;
    cin >> n;
    Queue *fila = fatoracaoPrima(n);

    cout << "Fatoracao Prima: ";
    while (!fila->isEmpty())
    {
        cout << fila->pop() << " ";
    }
    cout << endl;
    return 0;
}