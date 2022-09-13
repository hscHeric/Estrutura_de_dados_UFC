#include <iostream>

using namespace std;

void imprime(int n){
    if(n == 0){
        cout << n << endl;
    }else{
        imprime(n-1);
        cout << n << endl;
    }
}

int main()
{
    int n;
    cout << "Digite o valor de N: ";
    cin >> n;
    imprime(n);
    return 0;
}