#include <iostream>
#include "Queue.h"
using namespace std;
const int MAX = 10;

int main() {
    Queue fila(MAX);

    //Insere um elemento negativo e um positivo ate a fila ficar cheia
    for (int i = 0; i < MAX; i++) {
        if (i % 2 == 0) {
            fila.push_back(i);
        } else {
            fila.push_back(-i);
        }
    }

    //Remove todos os elementos negativos da fila
    for (int i = 0; i < MAX; i++) {
        if (fila.front() < 0) {
            fila.pop_front();
        }
        else if(fila.front() >= 0)
        {
            int aux = fila.front();
            fila.pop_front();
            fila.push_back(aux);
        }
    }

    //Imprime os elementos da fila
    while (!fila.empty()) {
        cout << fila.front() << " ";
        fila.pop_front();
    }
}
