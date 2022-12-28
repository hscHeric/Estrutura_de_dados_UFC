#include "../Include/Queue.h"

Queue::Queue()
{
    this->list = new LinearList();
}
Queue::Queue(int size, int *vetor)
{
    this->list = new LinearList(size, vetor);
}

Queue::~Queue()
{
    delete this->list;
}

void Queue::push(int value)
{
    this->list->push(value);
}

int Queue::pop()
{
    return this->list->pop();
}

int Queue::getFront()
{
    return this->list->getTop();
}

bool Queue::isEmpty()
{
    return this->list->isEmpty();
}

bool Queue::isFull()
{
    return this->list->isFull();
}

void Queue::print()
{
    this->list->print();
}