#include <iostream>
#include "Queue.h"
using namespace std;
const int MAX = 10;

int main() {
    Queue fila(MAX);

    //Adiciona elementos na fila de 1 a 10
    for (int i = 1; i <= MAX; i++) {
        fila.push_back(i);
    }

    //Adiciona elementos na fila de 11 a 20
    Queue fila2(MAX);
    for(int i = 11; i <= 20; i++) {
        fila2.push_back(i);
    }

    Queue fila3(MAX * 2);

    //Implementação da função combina_filas na ../src/Queue.cpp
    //Obs: a função combina_filas deve combinar os elementos de fila e fila2 em fila3, caso fila 3 já tenha elementos os elementos
    // de fila e fila2 devem ser adicionados no final de fila3
    combina_filas(&fila3, &fila, &fila2);

    cout << "Fila 3: ";
    while (!fila3.empty()) {
        cout << fila3.front() << " ";
        fila3.pop_front();
    }  
}
