#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"

class LinkedList
{
private:
    Node *m_head; // ponteiro para o primeiro elemento
    int m_size;   // número de elementos na lista
public:
    LinkedList();
    LinkedList(const LinkedList &l);
    LinkedList(int v[], int n);
    bool equals(const LinkedList &lst);
    void concat(LinkedList &lst);
    void reverse();
    int size();
    bool empty();
    void push_back(const Item &element);
    Item pop_back();
    Item &get(int index);
    std::string toString();
    void insert(int index, const Item &data);
    void remove(const Item &element);
    void removeAt(int index);
    void clear();
    ~LinkedList();
};

#endif
