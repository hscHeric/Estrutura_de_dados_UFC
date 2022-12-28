#include <iostream>

using namespace std;

int somaDigitos(int n){
    if(n < 10){
        return n;
    }else{
        return n % 10 + somaDigitos(n/10);
    }
}

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Soma dos digitos de " << n << " = " << somaDigitos(n) << endl;
    return 0;
}