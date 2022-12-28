#include "Stack.h"

Stack::Stack(int s, int *p)
{
    size = s;
    stackPtr = p;
    top = -1;
    lowerLimit = 0;
    upperLimit = size - 1;
}

Stack::~Stack()
{
}

bool Stack::push(const int &value)
{
    if (!isFull())
    {
        stackPtr[++top] = value;
        return true;
    }
    return false;
}

bool Stack::pop()
{
    if (!isEmpty())
    {
        top--;
        return true;
    }
    return false;
}

bool Stack::isEmpty() const
{
    return top == -1;
}

bool Stack::isFull() const
{
    return top == size - 1;
}

void Stack::print() const
{
    for (int ix = top; ix >= 0; ix--)
        cout << stackPtr[ix] << ' ';
    cout << endl;
}