#include <iostream>
#include "../include/LinkedList.h"
using namespace std;

int main()
{
    int v[] = {1, 2, 3, 4, 5};
    LinkedList lista(v, 5);

    lista.empty();
        /*    int v[] = {1, 2, 3, 4, 5};
            LinkedList l1;
            LinkedList l2(v, 5);
            LinkedList l3(l2);
            l1.push_back(10);
            l1.push_back(20);

            cout << "l1: " << l1.toString() << endl;

            cout << "l2: " << l2.toString() << endl;

            cout << "l3: " << l3.toString() << endl;

            cout << "l1.pop_back(): " << l1.pop_back() << endl;

            cout << "l1: " << l1.toString() << endl;

            cout << "l2.get(2): " << l2.get(2) << endl;

            cout << "l2: " << l2.toString() << endl;

            l2.insert(2, 100);

            cout << "l2: " << l2.toString() << endl;

            l2.remove(100);

            cout << "l2: " << l2.toString() << endl;

            l2.removeAt(2);

            cout << "l2: " << l2.toString() << endl;

            l1.clear();
            l2.clear();
            l3.clear();

        */
        return 0;
}