#include <stdexcept>
#include <iostream>
#include <string>
#include "../include/Node.h"
#include "../include/LinkedList.h"

// Constructor: the linked list
// initializes empty
LinkedList::LinkedList()
{
    m_size = 0;
    m_head = nullptr;
}

LinkedList::LinkedList(const LinkedList &l)
{
    m_size = l.m_size;
    if (l.m_head == nullptr)
    {
        m_head = nullptr;
    }
    else
    {
        m_head = new Node(l.m_head->data, nullptr);
        Node *current = l.m_head->next;
        Node *last = m_head;
        while (current != nullptr)
        {
            Node *newNode = new Node(current->data, nullptr);
            last->next = newNode;
            last = newNode;
            current = current->next;
        }
    }
}
// contrutor que recebe um vetor de inteiros e o número de elementos do vetor
LinkedList::LinkedList(int v[], int n)
{
    m_size = n;
    m_head = new Node(v[0], nullptr);
    Node *last = m_head;
    for (int i = 1; i < n; i++)
    {
        Node *newNode = new Node(v[i], nullptr);
        last->next = newNode;
        last = newNode;
    }
}
// Determina se a lista lst, passada por parâmetro, é igual a lista atual
bool LinkedList::equals(const LinkedList &lst)
{
    if (m_size != lst.m_size)
    {
        return false;
    }
    Node *current = m_head;
    Node *current2 = lst.m_head;
    while (current != nullptr)
    {
        if (current->data != current2->data)
        {
            return false;
        }
        current = current->next;
        current2 = current2->next;
    }
    return true;
}
void LinkedList::concat(LinkedList &lst)
{
    if (lst.m_head == nullptr)
    {
        return;
    }
    if (m_head == nullptr)
    {
        m_head = lst.m_head;
        m_size = lst.m_size;
        lst.m_head = nullptr;
        lst.m_size = 0;
        return;
    }
    Node *current = m_head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = lst.m_head;
    m_size += lst.m_size;
    lst.m_head = nullptr;
    lst.m_size = 0;
}
void LinkedList::reverse()
{
    if (m_head == nullptr)
    {
        return;
    }
    Node *current = m_head;
    Node *previous = nullptr;
    Node *next = nullptr;
    while (current != nullptr)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    m_head = previous;
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
        throw std::underflow_error("empty list");
    }
    if (m_head->next == nullptr)
    {
        Item value = m_head->data;
        delete m_head;
        m_head = nullptr;
        m_size = 0;
        return value;
    }
    Node *current = m_head;
    while (current->next->next != nullptr)
    {
        current = current->next;
    }
    Item value = current->next->data;
    delete current->next;
    current->next = nullptr;
    m_size--;
    return value;
}

Item &LinkedList::get(int index)
{
    if (index < 0 || index >= m_size)
        throw std::invalid_argument("indice invalido");
    Node *ptr = m_head;
    for (int i = 0; i < index; ++i)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}

std::string LinkedList::toString()
{
    std::string str = "[ ";
    Node *current = m_head;
    while (current != nullptr)
    {
        str += std::to_string(current->data) + " ";
        current = current->next;
    }
    str += "]";
    return str;
}

// Inserts data at any position in the range [0..size()]
void LinkedList::insert(int index, const Item &data)
{
    if (index < 0 || index > m_size)
    {
        throw std::out_of_range("index out of range");
    }
    if (index == 0)
    {
        Node *newnode = new Node(data, m_head);
        m_head = newnode;
        m_size++;
        return;
    }
    int counter = 0;
    Node *current = m_head;
    while (counter < index - 1)
    {
        counter++;
        current = current->next;
    }
    Node *newnode = new Node(data, current->next);
    current->next = newnode;
    m_size++;
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
