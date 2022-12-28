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
    //Cria uma stack com 20 elementos
    Stack stack1;
    for (int i = 0; i < 20; i++)
    {
        stack1.push(i);
    }

    //Desempilha 10 elementos
    int *vetor = stack1.popNElem(10);

    //Imprime o vetor
    for (int i = 0; i < 10; i++)
    {
        cout << vetor[i] << " ";
    }

}