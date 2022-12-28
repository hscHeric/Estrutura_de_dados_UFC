#include <iostream>
#include "Queue.h"

using namespace std;

// Explicações:
/**
 * A file circular é uma estrutura de dados que funciona como uma fila, porém, ao invés de
 * serem inseridos e removidos elementos do início e do fim da fila, eles são inseridos e
 * removidos do início e do fim da lista linear.
 *
 * Para implementar uma fila circular, basta utilizar uma lista linear e fazer com que o
 * ponteiro de topo da lista circular aponte para o início da lista linear.
 *
 * Nessa implementação em questão utilizei uma lista linear implementada como um vetor
 */

int main()
{
    int vetor[5];
    Queue *queue = new Queue(5, vetor);

    for (int i = 0; i < 5; i++)
    {
        queue->push(i);
    }

    queue->print();

    for (int i = 0; i < 3; i++)
    {
        queue->pop();
    }

    queue->print();

    for (int i = 3; i < 6; i++)
    {
        queue->push(i);
    }

    queue->print();

    return 0;
}