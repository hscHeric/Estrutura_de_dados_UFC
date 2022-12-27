// Implementação da classe Stack que compartilha um vetor com outra Stack

#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

class Stack
{

private:
    int size;      // tamanho da pilha
    int *stackPtr; // ponteiro para a pilha
    int top;       // índice do topo da pilha
    int lowerLimit;
    int upperLimit;

public:
    Stack();                // construtor padrão
    Stack(int, int *);      // construtor
    ~Stack();               // destrutor
    bool push(const int &); // insere um elemento no topo da pilha
    bool pop();             // remove um elemento do topo da pilha
    bool isEmpty() const;   // retorna true se a pilha estiver vazia
    bool isFull() const;    // retorna true se a pilha estiver cheia
    void print() const;     // imprime os elementos da pilha
};

#endif