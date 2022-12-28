#include <iostream>
#include "./Include/Stack.h"

using namespace std;

// Explicações:
/**
 * A popNElem() é uma função que desempilha n elementos da pilha.
 * Ela recebe como parâmetro um inteiro n, que é o número de elementos a serem desempilhados.
 * Ela retorna um ponteiro para um vetor de inteiros, que contém os elementos desempilhados.
 * 
 * Exemplo de uso pode ser visto no main.cpp
*/

int main()
{
    Stack stack; 
    //Coloca 80 elementos na pilha
    for (int i = 0; i < 80; i++)
    {
        stack.push(i);
    }

    //Cria uma cópia da pilha
    Stack *stackCopy = stackCopy(stack);

    //Impressão da pilha original
    cout << "Pilha original: " << endl;
    stack.print();

    //Impressão da pilha copiada
    cout << "Pilha copiada: " << endl;
    stackCopy->print();
}