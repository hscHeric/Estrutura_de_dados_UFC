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
    this->top = this->top->next;
    int data = aux->data;
    delete aux;
    this->size--;
    return data;
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