#include "../include/ListEncD.h"
#include <iostream>

using namespace std;

int main(void)
{
    ListEncD *list = new ListEncD();
    
    for (int i = 0; i < 10; i++)
    {
        list->insert(i);
    }

    list->print();
    list->printReverse();
    cout << "Tamanho da lista: " << list->listSize() << endl;
    list->remove(5);
    list->print();
    list->printReverse();
    cout << "Tamanho da lista: " << list->listSize() << endl;


    ListEncD *list2 = new ListEncD(*list);
    list2->print();
    list2->printReverse();

    list->concat(list2);
    list->print();
    list->printReverse();

    cout << "Tamanho da lista: " << list->listSize() << endl;
    cout << "Tamanho da lista2: " << list2->listSize() << endl;


    list->clear();
    list2->clear();
    delete list;
    delete list2;
    return 0;
}