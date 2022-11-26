#ifndef CIRCLELIST_H
#define CIRCLELIST_H

struct node;

class CircleList
{
private:
    node *head;
    int size;

public:
    CircleList();
    CircleList(const CircleList &other); // Contructor de copia
    ~CircleList();
    void insert(int value);      // Insere um nó no final da lista
    void remove(int value);      // Remove um nó da lista que contenha o valor passado como parâmetro
    bool contains(int value);    // Procura um nó na lista que contenha o valor passado como parâmetro
    int listSize();                  // Retorna o tamanho da lista
    void concat(CircleList &list); // Concatena a lista passada como parâmetro no final da lista atual
    void print();                // Imprime a lista
    void printReverse();         // Imprime a lista ao contrário
    void clear();                // Limpa a lista
};

#endif