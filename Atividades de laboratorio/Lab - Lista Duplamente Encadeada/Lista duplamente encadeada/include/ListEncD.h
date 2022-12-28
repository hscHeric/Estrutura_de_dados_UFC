#ifndef LISTENCD_H
#define LISTENCD_H

struct node;

class ListEncD
{
private:
    node *head;
    int size;

public:
    ListEncD();
    ListEncD(const ListEncD &other); // Contructor de copia
    ~ListEncD();
    void insert(int value);      // Insere um nó no final da lista
    void remove(int value);      // Remove um nó da lista que contenha o valor passado como parâmetro
    bool contains(int value);    // Procura um nó na lista que contenha o valor passado como parâmetro
    int listSize();                  // Retorna o tamanho da lista
    void concat(ListEncD *list); // Concatena a lista passada como parâmetro no final da lista atual
    void print();                // Imprime a lista
    void printReverse();         // Imprime a lista ao contrário
    void clear();                // Limpa a lista
};

#endif