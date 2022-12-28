#include "../include/CircleList.h"
#include <iostream>

struct node {
    int value;
    node *next;
};


CircleList::CircleList() {
    head = nullptr;
    size = 0;
}

CircleList::CircleList(const CircleList &other) {
    head = nullptr;
    size = 0;
    node *aux = other.head;
    for (int i = 0; i < other.size; i++) {
        insert(aux->value);
        aux = aux->next;
    }
}

CircleList::~CircleList() {
    clear();
}

void CircleList::insert(int value) {
    node *newNode = new node;
    newNode->value = value;
    if (head == nullptr) {
        head = newNode;
        head->next = head;
    } else {
        node *aux = head;
        while (aux->next != head) {
            aux = aux->next;
        }
        aux->next = newNode;
        newNode->next = head;
    }
    size++;
}

void CircleList::remove(int value) {
    if (head != nullptr) {
        node *aux = head;
        node *prev = nullptr;
        while (aux->next != head && aux->value != value) {
            prev = aux;
            aux = aux->next;
        }
        if (aux->value == value) {
            if (aux == head) {
                head = head->next;
            }
            if (prev != nullptr) {
                prev->next = aux->next;
            }
            delete aux;
            size--;
        }
    }
}


bool CircleList::contains(int value) {
    if (head != nullptr) {
        node *aux = head;
        while (aux->next != head && aux->value != value) {
            aux = aux->next;
        }
        if (aux->value == value) {
            return true;
        }
    }
    return false;
}

int CircleList::listSize() {
    return size;
}

void CircleList::concat(CircleList &list) {
    if (list.head != nullptr) {
        node *aux = list.head;
        for (int i = 0; i < list.size; i++) {
            insert(aux->value);
            aux = aux->next;
        }
    }
}

void CircleList::print() {
    if (head != nullptr) {
        node *aux = head;
        for (int i = 0; i < size; i++) {
            std::cout << aux->value << " ";
            aux = aux->next;
        }
        std::cout << std::endl;
    }
}

void CircleList::printReverse() {
    if (head != nullptr) {
        node *aux = head;
        for (int i = 0; i < size; i++) {
            aux = aux->next;
        }
        for (int i = 0; i < size; i++) {
            std::cout << aux->value << " ";
            aux = aux->next;
        }
        std::cout << std::endl;
    }
}

void CircleList::clear() {
    if (head != nullptr) {
        node *aux = head;
        node *next = nullptr;
        for (int i = 0; i < size; i++) {
            next = aux->next;
            delete aux;
            aux = next;
        }
        head = nullptr;
        size = 0;
    }
}
