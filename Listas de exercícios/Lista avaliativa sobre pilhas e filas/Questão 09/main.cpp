#include <iostream>
#include "./Include/Queue.h"

using namespace std;

// Explicações:
/**
 * O contrutor do Node recebe um array de inteiros e o tamanho desse array
 * e cria um novo array de inteiros com o mesmo tamanho e copia os valores
 * do array passado para o novo array.
 * 
 * O construtor da classe Queue inicializa os atributos head e tail com nullptr
 * e o atributo size com 0.
 * 
 * De forma que a classe Queue é uma fila de Nodes, onde cada Node contém um array
 * de inteiros e o tamanho desse array.
 */

int main()
{
    int *array = new int[20];

    for (int i = 0; i < 20; i++)
    {
        array[i] = i;
    }

    Queue queue;

    queue.enqueue(array, 20);

    queue.print();
    
}