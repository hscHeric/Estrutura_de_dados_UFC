#include "../Include/Queue.h"

Queue::Queue()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

Queue::~Queue()
{
    while (head != nullptr)
    {
        dequeue();
    }
}

void Queue::enqueue(const int *data, int size)
{
    Node *newNode = new Node(data, size);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    this->size++;
}

void Queue::dequeue()
{
    if (head == nullptr)
    {
        return;
    }
    Node *temp = head;
    head = head->next;
    delete[] temp->data;
    delete temp;
    this->size--;
}

void Queue::print()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        for (int i = 0; i < temp->size; i++)
        {
            cout << temp->data[i] << " ";
        }
        cout << endl;
        temp = temp->next;
    }
}
