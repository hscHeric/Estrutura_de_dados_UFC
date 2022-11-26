// Implementação da ListEncD.h

#include "ListEncD.h"
#include <iostream>

struct node
{
    int value;
    node *next;
    node *prev;
};

ListEncD::ListEncD()
{
    head = nullptr;
    size = 0;
}

ListEncD::ListEncD(const ListEncD &other)
{
    if (other.head == nullptr)
    {
        head = nullptr;
        size = 0;
    }
    else
    {
        head = new node;
        head->value = other.head->value;
        head->next = nullptr;
        head->prev = nullptr;
        size = 1;

        //Copia os demais nós
        node *aux = other.head->next;
        node *aux2 = head;
        while (aux != nullptr)
        {
            node *newNode = new node;
            newNode->value = aux->value;
            newNode->next = nullptr;
            newNode->prev = aux2;
            aux2->next = newNode;
            aux2 = newNode;
            aux = aux->next;
            size++;
        }
    }
}

ListEncD::~ListEncD()
{
    clear();
}

void ListEncD::insert(int value)
{
    try
    {
        node *newNode = new node;
        newNode->value = value;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            node *aux = head;
            while (aux->next != nullptr)
            {
                aux = aux->next;
            }
            aux->next = newNode;
            newNode->prev = aux;
        }
        size++;
    }
    catch (std::bad_alloc &e)
    {
        std::cout << "Erro de alocação de memória: " << e.what() << std::endl;
    }
}

void ListEncD::remove(int value)
{
    if (head != nullptr)
    {
        node *aux = head;
        while (aux != nullptr && aux->value != value)
        {
            aux = aux->next;
        }
        if (aux != nullptr)
        {
            if (aux == head)
            {
                head = head->next;
                if (head != nullptr)
                {
                    head->prev = nullptr;
                }
            }
            else
            {
                aux->prev->next = aux->next;
                if (aux->next != nullptr)
                {
                    aux->next->prev = aux->prev;
                }
            }
            delete aux;
            size--;
        }
    }
}

bool ListEncD::contains(int value)
{
    if (head != nullptr)
    {
        node *aux = head;
        while (aux != nullptr && aux->value != value)
        {
            aux = aux->next;
        }
        if (aux != nullptr)
        {
            return true;
        }
    }
    return false;
}

int ListEncD::listSize()
{
    return size;
}

void ListEncD::concat(ListEncD *list)
{
    if (list != nullptr && list->head != nullptr)
    {
        if (head == nullptr)
        {
            head = list->head;
            size = list->size;
        }
        else
        {
            node *aux = head;
            while (aux->next != nullptr)
            {
                aux = aux->next;
            }
            aux->next = list->head;
            list->head->prev = aux;
            size += list->size;
        }
        list->head = nullptr;
        list->size = 0;
    }
}

void ListEncD::print()
{
    if (head != nullptr)
    {
        node *aux = head;
        while (aux != nullptr)
        {
            std::cout << aux->value << " ";
            aux = aux->next;
        }
        std::cout << std::endl;
    }
}

void ListEncD::printReverse()
{
    if (head != nullptr)
    {
        node *aux = head;
        while (aux->next != nullptr)
        {
            aux = aux->next;
        }
        while (aux != nullptr)
        {
            std::cout << aux->value << " ";
            aux = aux->prev;
        }
        std::cout << std::endl;
    }
}

void ListEncD::clear()
{
    if (head != nullptr)
    {
        node *aux = head;
        while (aux != nullptr)
        {
            node *aux2 = aux->next;
            delete aux;
            aux = aux2;
        }
        head = nullptr;
        size = 0;
    }
}