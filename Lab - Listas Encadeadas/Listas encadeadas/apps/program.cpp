#include <iostream>
#include "../include/LinkedList.h"
using namespace std;

int main() {
    LinkedList list; // cria lista vazia

    for(int i = 1; i <= 10; ++i) // insere 1..10
        list.push_back(i);

    LinkedList list2(list);

    cout << list.toString() << endl; // imprime lista na tela

    cout << list2.toString() << endl; // imprime lista na tela

    for(int i = 0; i < list.size(); ++i) 
        list.get(i) *= 2; // dobra cada valor
    
    cout << list.toString() << endl; // imprime lista na tela

    //Testa as funções de concatenação e reversão

    int v[] = {11, 12, 13, 14, 15};
    LinkedList list3(v, 5);
    list.concat(list3);
    cout << list.toString() << endl;

    list.reverse();
    cout << list.toString() << endl;

    //Libera a memória alocada
    list.clear();
    list2.clear();
    list3.clear();

}