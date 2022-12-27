#include "../Include/LinearList.h"

#include <iostream>

using namespace std;

LinearList::LinearList()
{
    this->size = 100;
    this->vetor = new int[this->size];
    this->topo = -1;
}
LinearList::LinearList(int size, int *vetor)
{
    this->size = size;
    this->vetor = vetor;
    this->topo = -1;
}

LinearList::~LinearList()
{
    delete[] this->vetor;
}

void LinearList::push(int value)
{
    if (this->isFull())
    {
        cout << "A lista está cheia!" << endl;
        return;
    }
    this->vetor[++this->topo] = value;
}

int LinearList::pop()
{
    if (this->isEmpty())
    {
        cout << "A lista está vazia!" << endl;
        return -1;
    }
    return this->vetor[this->topo--];
}

int LinearList::getTop()
{
    if (this->isEmpty())
    {
        cout << "A lista está vazia!" << endl;
        return -1;
    }
    return this->vetor[this->topo];
}

bool LinearList::isEmpty()
{
    return this->topo == -1;
}

bool LinearList::isFull()
{
    return this->topo == this->size - 1;
}

void LinearList::print()
{
    if (this->isEmpty())
    {
        cout << "A lista está vazia!" << endl;
        return;
    }
    for (int i = 0; i <= this->topo; i++)
    {
        cout << this->vetor[i] << " ";
    }
    cout << endl;
}