#ifndef LINEARLIST_H
#define LINEARLIST_H

// Cabeçalho da classe Lista linear
class LinearList
{
private:
    int *vetor; // ponteiro para o vetor
    int size;   // tamanho do vetor
    int topo;   // Primeiro elemento da lista

public:
    LinearList();                     // construtor
    LinearList(int size, int *vetor); // construtor
    ~LinearList();                    // destrutor
    void push(int value);             // insere um elemento no final da lista
    int pop();                        // remove o elemento do final da lista e retorna o valor removido
    int getTop();                     // retorna o valor do elemento do final da lista
    bool isEmpty();                   // retorna true se a lista estiver vazia
    bool isFull();                    // retorna true se a lista estiver cheia
    void print();                     // imprime os elementos da lista
};
#endif