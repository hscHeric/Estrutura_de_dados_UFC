#include <iostream>
#include "./Include/Stack.h"

using namespace std;

// Explicações:
/**
 * O programa converte um número inteiro para binário.
 * Ele faz isso usando uma pilha, ela empilha os restos das divisões
 * sucessivas do número por 2, e depois desempilha os restos, que são
 * os dígitos binários.
 */

int main()
{
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    Stack *pilha = new Stack();
    while (n > 0)
    {
        int aux = n % 2;
        pilha->push(aux);
        n = n / 2;
    }

    cout << "Numero em binario: ";

    while (!pilha->isEmpty())
    {
        cout << pilha->pop();
    }

    cout << endl;
}