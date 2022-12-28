#ifndef PILHAFILA_H
#define PILHAFILA_H

#include "Node.h"

class Pilha
{
private:
    Node *topo;  // topo da pilha
    int tamanho; // tamanho da pilha

public:
    Pilha();                                   // construtor
    ~Pilha();                                  // destrutor
    void push(Item item);                      // empilhar
    Item pop();                                // desempilhar
    Item top();                                // retorna o topo da pilha
    int size();                                // retorna o tamanho da pilha
    bool isEmpty();                            // verifica se a pilha está vazia
    bool isEqual(Pilha *pilha, Pilha *pilha2); // verifica se duas pilhas são iguais
    void print();                              // imprime a pilha
};

class Fila
{
private:
    Node *inicio; // inicio da fila
    Node *fim;    // fim da fila
    int tamanho;  // tamanho da fila

public:
    Fila();                                // construtor
    ~Fila();                               // destrutor
    void enqueue(Item item);               // enfileirar
    Item dequeue();                        // desenfileirar
    Item front();                          // retorna o inicio da fila
    int size();                            // retorna o tamanho da fila
    bool isEmpty();                        // verifica se a fila está vazia
    bool isEqual(Fila *fila, Fila *fila2); // verifica se duas filas são iguais
    void print();                          // imprime a fila
    void inverteFila();                    // inverte a fila
};

#endif