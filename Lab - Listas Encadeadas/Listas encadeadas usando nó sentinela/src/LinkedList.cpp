#include <stdexcept>
#include <iostream>
#include <string>
#include "../include/Node.h"
#include "../include/LinkedList.h"

// Constructor: the linked list
// initializes empty
LinkedList::LinkedList()
{
    m_head = m_sentinela;
    m_size = 0;
    m_sentinela->next = nullptr;
}

LinkedList::LinkedList(const LinkedList &l)
{
    m_head = m_sentinela;
    m_size = 0;
    m_sentinela->next = nullptr;
    Node *aux = l.m_head;
    while (aux != nullptr)
    {
        push_back(aux->data);
        aux = aux->next;
    }
}
LinkedList::LinkedList(int v[], int n)
{
    m_head = m_sentinela;
    m_size = 0;
    m_sentinela->next = nullptr;
    for (int i = 0; i < n; i++)
    {
        push_back(v[i]);
    }
}

// Returns the size of the list
int LinkedList::size()
{
    return m_size;
}

// Returs true if and only if the
// list is empty
bool LinkedList::empty()
{
    return m_head == nullptr;
}

// Adds an element at the end of the list
void LinkedList::push_back(const Item &data)
{
    Node *newnode = new Node(data, nullptr);
    if (m_head == nullptr)
    {
        m_head = newnode;
    }
    else
    {
        Node *current = m_head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newnode;
    }
    m_size++;
}

// Deletes an element from the end of the list
Item LinkedList::pop_back()
{
    if (m_head == nullptr)
    {
        throw std::out_of_range("Empty list");
    }
    else
    {
        Node *current = m_head;
        Node *previous = nullptr;
        while (current->next != nullptr)
        {
            previous = current;
            current = current->next;
        }
        if (previous == nullptr)
        {
            m_head = nullptr;
        }
        else
        {
            previous->next = nullptr;
        }
        Item data = current->data;
        delete current;
        m_size--;
        return data;
    }
}

Item &LinkedList::get(int index)
{
    if (index < 0 || index >= m_size)
    {
        throw std::out_of_range("Invalid index");
    }
    else
    {
        Node *current = m_head;
        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }
        return current->data;
    }
}

std::string LinkedList::toString()
{
    std::string s = "[";
    Node *current = m_head;
    while (current != nullptr)
    {
        if (current == m_sentinela)
        {
            s += "s";
        }
        else
        {
            s += std::to_string(current->data);
        }
        if (current->next != nullptr)
        {
            s += ", ";
        }
        current = current->next;
    }

    s += "]";
    return s;
}

// Inserts data at any position in the range [0..size()]
void LinkedList::insert(int index, const Item &data)
{
    if (index < 0 || index > m_size)
    {
        throw std::out_of_range("Invalid index");
    }
    else
    {
        Node *newnode = new Node(data, nullptr);
        if (index == 0)
        {
            newnode->next = m_head;
            m_head = newnode;
        }
        else
        {
            Node *current = m_head;
            for (int i = 0; i < index - 1; i++)
            {
                current = current->next;
            }
            newnode->next = current->next;
            current->next = newnode;
        }
        m_size++;
    }
}

// Deletes data at any position in the range [0..size()-1]
void LinkedList::removeAt(int index)
{
    if (index < 0 || index >= m_size)
    {
        throw std::out_of_range("index out of range");
    }
    if (index == 0)
    {
        Node *temp = m_head;
        m_head = m_head->next;
        delete temp;
        m_size--;
        return;
    }
    int counter = 0;
    Node *current = m_head;
    while (counter < index - 1)
    {
        counter++;
        current = current->next;
    }
    Node *temp = current->next;
    current->next = current->next->next;
    delete temp;
    m_size--;
}


void LinkedList::remove(const Item &element){
    Node *current = m_head;
    Node *previous = nullptr;
    while (current != nullptr)
    {
        if (current->data == element)
        {
            if (previous == nullptr)
            {
                m_head = current->next;
            }
            else
            {
                previous->next = current->next;
            }
            delete current;
            m_size--;
            return;
        }
        previous = current;
        current = current->next;
    }
}
// Empty the list and frees memory
void LinkedList::clear()
{
    while (m_head != nullptr)
    {
        Node *temp = m_head;
        m_head = m_head->next;
        delete temp;
    }
    m_size = 0;
}

// Destructor
LinkedList::~LinkedList()
{
    clear();
}
