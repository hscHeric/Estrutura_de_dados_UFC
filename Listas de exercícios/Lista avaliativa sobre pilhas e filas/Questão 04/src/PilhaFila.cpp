// implementacao da pilha

#include <iostream>
#include "../include/PilhaFila.h"
#include "../include/Node.h"
using namespace std;

// implementacao da pilha

// construtor
Pilha::Pilha()
{
    topo = nullptr;
    tamanho = 0;
}

// destrutor
Pilha::~Pilha()
{
    while (!isEmpty())
    {
        pop();
    }
}

// empilhar
void Pilha::push(Item item)
{
    Node *novo = new Node(item);
    novo->next = topo;
    topo = novo;
    tamanho++;
}

// desempilhar
Item Pilha::pop()
{
    if (isEmpty())
    {
        throw "Pilha vazia";
    }
    Node *aux = topo;
    Item item = topo->data;
    topo = topo->next;
    delete aux;
    tamanho--;
    return item;
}

// retorna o topo da pilha
Item Pilha::top()
{
    if (isEmpty())
    {
        throw "Pilha vazia";
    }
    return topo->data;
}

// retorna o tamanho da pilha
int Pilha::size()
{
    return tamanho;
}

// verifica se a pilha está vazia
bool Pilha::isEmpty()
{
    return tamanho == 0;
}

// verifica se duas pilhas são iguais
bool Pilha::isEqual(Pilha *pilha, Pilha *pilha2)
{
    if (pilha->size() != pilha2->size())
    {
        return false;
    }
    while (!pilha->isEmpty())
    {
        if (pilha->top() != pilha2->top())
        {
            return false;
        }
        pilha->pop();
        pilha2->pop();
    }
    return true;
}

// imprime a pilha
void Pilha::print()
{
    Node *aux = topo;
    while (aux != nullptr)
    {
        cout << aux->data << " ";
        aux = aux->next;
    }
    cout << endl;
}

// implementacao da fila
Fila::Fila()
{
    inicio = nullptr;
    fim = nullptr;
    tamanho = 0;
}

// destrutor
Fila::~Fila()
{
    while (!isEmpty())
    {
        dequeue();
    }
}

// enfileirar
void Fila::enqueue(Item item)
{
    Node *novo = new Node(item);
    if (isEmpty())
    {
        inicio = novo;
    }
    else
    {
        fim->next = novo;
    }
    fim = novo;
    tamanho++;
}

// desenfileirar
Item Fila::dequeue()
{
    if (isEmpty())
    {
        throw "Fila vazia";
    }
    Node *aux = inicio;
    Item item = inicio->data;
    inicio = inicio->next;
    delete aux;
    tamanho--;
    return item;
}

// retorna o inicio da fila
Item Fila::front()
{
    if (isEmpty())
    {
        throw "Fila vazia";
    }
    return inicio->data;
}

// retorna o tamanho da fila
int Fila::size()
{
    return tamanho;
}

// verifica se a fila está vazia
bool Fila::isEmpty()
{
    return tamanho == 0;
}

// verifica se duas filas são iguais
bool Fila::isEqual(Fila *fila, Fila *fila2)
{
    if (fila->size() != fila2->size())
    {
        return false;
    }
    while (!fila->isEmpty())
    {
        if (fila->front() != fila2->front())
        {
            return false;
        }
        fila->dequeue();
        fila2->dequeue();
    }
    return true;
}

// imprime a fila
void Fila::print()
{
    Node *aux = inicio;
    while (aux != nullptr)
    {
        cout << aux->data << " ";
        aux = aux->next;
    }
    cout << endl;
}

// inverte a fila
void Fila::inverteFila()
{
    Pilha *pilha = new Pilha();
    while (!this->isEmpty())
    {
        pilha->push(this->dequeue());
    }
    while (!pilha->isEmpty())
    {
        this->enqueue(pilha->pop());
    }
}