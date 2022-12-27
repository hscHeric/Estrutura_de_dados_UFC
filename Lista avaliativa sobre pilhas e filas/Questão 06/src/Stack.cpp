/*#ifndef STACK_H
#define STACK_H

struct Node
{
    int data;
    Node *next;

    Node(int &data, Node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

class Stack
{
private:
    Node *top;
    int size;

public:
    Stack();
    ~Stack();
    void push(int &data);
    int pop();
    int* popNElem(int n); // Desempilha n elementos
    int peek();
    bool isEmpty();
    int getSize();
};

int stackIsEqual(Stack &stack1, Stack &stack2);

#endif*/

#include "../Include/Stack.h"

Stack::Stack()
{
    this->top = nullptr;
    this->size = 0;
}

Stack::~Stack()
{
    while (!this->isEmpty())
    {
        this->pop();
    }
}

void Stack::push(int &data)
{
    Node *newNode = new Node(data, this->top);
    this->top = newNode;
    this->size++;
}

int Stack::pop()
{
    if (this->isEmpty())
    {
        throw "Stack is empty";
    }

    Node *aux = this->top;
    int data = this->top->data;
    this->top = this->top->next;
    delete aux;
    this->size--;

    return data;
}

int *Stack::popNElem(int n)
{
    if (this->isEmpty())
    {
        throw "Stack is empty";
    }

    int *vetor = new int[n];

    for (int pos = 0; pos < n; pos++)
    {
        vetor[pos] = this->pop();
    }

    return vetor;
}

int Stack::peek()
{
    if (this->isEmpty())
    {
        throw "Stack is empty";
    }

    return this->top->data;
}

bool Stack::isEmpty()
{
    return this->size == 0;
}

int Stack::getSize()
{
    return this->size;
}

int stackIsEqual(Stack &stack1, Stack &stack2)
{
    if (stack1.getSize() != stack2.getSize())
    {
        return 0;
    }

    Stack stack3;

    while (!stack1.isEmpty())
    {
        int data1 = stack1.pop();
        int data2 = stack2.pop();
        stack3.push(data1);
        stack3.push(data2);

        if (data1 != data2)
        {
            return 0;
        }
    }

    while (!stack3.isEmpty())
    {
        int data1 = stack3.pop();
        int data2 = stack3.pop();
        stack1.push(data1);
        stack2.push(data2);
    }

    return 1;
}