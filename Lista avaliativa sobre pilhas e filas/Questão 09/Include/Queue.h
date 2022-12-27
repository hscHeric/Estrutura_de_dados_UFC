#ifndef QUEUE_H
#define QUEUE_H

// Implementação de uma fila que cada Node contém um numero variavel de elementos inteiros

#include <iostream>

using namespace std;

struct Node
{
    int *data;
    int size;
    Node *next;

    Node(const int *data, int size, Node *next = nullptr)
    {
        this->data = new int[size];
        for (int i = 0; i < size; i++)
        {
            this->data[i] = data[i];
        }
        this->size = size;
        this->next = next;
    }
};

class Queue
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    Queue();
    ~Queue();
    void enqueue(const int *data, int size);
    void dequeue();
    void print();
};

#endif