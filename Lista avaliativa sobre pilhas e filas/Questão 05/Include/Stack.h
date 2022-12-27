#ifndef STACK_H
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
    int peek();
    bool isEmpty();
    int getSize();
};

int stackIsEqual(Stack &stack1, Stack &stack2);

#endif