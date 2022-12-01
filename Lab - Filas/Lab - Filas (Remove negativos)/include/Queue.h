#ifndef QUEUE_ARRAY
#define QUEUE_ARRAY
#include <iostream>

class Queue {
private: 
    int *array; // ponteiro para vetor de int
    int m_size; // Qtd de elementos na Fila
    int capacity; // Capacidade total da Fila
    int first; // Indice do primeiro elemento
public:
    Queue(const int capacity); // Construtor
    ~Queue(); // Destrutor
    void push_back(const int& data); // Adiciona na fila
    void pop_front(); // Remove da fila
    bool empty(); // A fila esta vazia?
    bool full(); // A fila esta cheia?
    int size(); // tamanho da fila
    int& front(); // Valor do elemento na cabeca
    int& back(); // valor do elemento na cauda
};

#endif
