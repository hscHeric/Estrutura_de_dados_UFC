#ifndef QUEUE_H
#define QUEUE_H

#include "LinearList.h"

class Queue
{
private:
    LinearList *list; // ponteiro para a lista linear

public:
    Queue(int size, int *vetor); // construtor
    ~Queue();                    // destrutor
    void push(int value);        // insere um elemento no final da fina
    int pop();                   // remove o elemento do inicio da fila e retorna o valor removido
    int getFront();              // retorna o valor do elemento do inicio da fila
    bool isEmpty();              // retorna true se a fila estiver vazia
    bool isFull();               // retorna true se a fila estiver cheia
    void print();                // imprime os elementos da fila
};

#endif