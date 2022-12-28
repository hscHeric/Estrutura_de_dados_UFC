#include <iostream>
#include "../include/SeqList.h"
using namespace std;

int main() {
	SeqList list1(15), list2(10);

	for(int i = 0; i < 10; ++i) {
		list1.add(i);
		list2.add(i * 2);
	}
	// imprime [0,1,2,3,4,5,6,7,8,9]
	cout << list1.toString() << endl; 
	// imprime [0,2,4,6,8,10,12,14,16,18]
	cout << list2.toString() << endl; 
	SeqList list3 = list2.sublist(3,10);
	// imprime // [6,8,10,12,14]
	cout << list3.toString() << endl; 


	//Libera a memória alocada
	list1.clear();
	list2.clear();
	list3.clear();

	return 0;
}