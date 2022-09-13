#include <iostream>

using namespace std;

int multRec(int n1, int n2){
    if(n2 == 0){
        return 0;
    }else{
        return n1 + multRec(n1, n2-1);
    }
}

int main()
{
    int n1, n2;
    cout << "Digite o valor de N1: ";
    cin >> n1;
    cout << "Digite o valor de N2: ";
    cin >> n2;
    cout << "O valor de N1 multiplicado por N2 é: " << multRec(n1, n2) << endl;
    return 0;
}