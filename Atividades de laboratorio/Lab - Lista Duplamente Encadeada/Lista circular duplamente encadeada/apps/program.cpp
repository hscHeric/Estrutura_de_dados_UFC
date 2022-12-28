#include "../include/CircleList.h"
#include <iostream>

using namespace std;

int main(void)
{
    CircleList list;
    for (int i = 0; i < 5; i++)
    {
        list.insert(i);
    }

    list.remove(0);

    if (list.contains(3))
    {
        cout << "Element 3 found" << endl;
    }
    else
    {
        cout << "Element 3 not found" << endl;
    }
    
    cout << "List size: " << list.listSize() << endl;

    CircleList list2(list);

    list.concat(list2);

    list.print();
    list.printReverse();

    list.clear();

    list.~CircleList();
    list2.~CircleList();

    return 0;
}