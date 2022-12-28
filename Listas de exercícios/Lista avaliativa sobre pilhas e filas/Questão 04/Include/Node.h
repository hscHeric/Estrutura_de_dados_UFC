#ifndef NODE_H
#define NODE_H

typedef int Item;

struct Node {
    Item data;
    Node *next;
    Node(const Item &data) {
        this->data = data;
        // this->next = ptr;
    }
};

#endif