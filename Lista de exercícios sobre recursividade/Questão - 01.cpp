#include <iostream>

using namespace std;

int potencia(int k, int n){
    if(n == 0){
        return 1;
    }else{
        return k * potencia(k, n-1);
    }
}

int main()
{
    int k, n;
    cout << "Digite o valor de K: ";
    cin >> k;
    cout << "Digite o valor de N: ";
    cin >> n;
    cout << "O valor de K elevado a N é: " << potencia(k, n) << endl;
    return 0;
}