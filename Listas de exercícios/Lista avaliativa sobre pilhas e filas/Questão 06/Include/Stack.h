#ifndef STACK_H
#define STACK_H

struct Node
{
    int data;   // Dado do nó
    Node *next; // Ponteiro para o próximo nó

    Node(int &data, Node *next = nullptr) // Construtor
    {
        this->data = data;
        this->next = next;
    }
};

class Stack
{
private:
    Node *top; // Ponteiro para o topo da pilha
    int size;  // Tamanho da pilha

public:
    Stack();               // Construtor
    ~Stack();              // Destrutor
    void push(int &data);  // Empilha um elemento
    int pop();             // Desempilha um elemento
    int* popNElem(int n); // Desempilha n elementos
    int peek();            // Retorna o elemento do topo da pilha
    bool isEmpty();        // Verifica se a pilha está vazia
    int getSize();         // Retorna o tamanho da pilha
};

int stackIsEqual(Stack &stack1, Stack &stack2); // Verifica se duas pilhas são iguais

#endif