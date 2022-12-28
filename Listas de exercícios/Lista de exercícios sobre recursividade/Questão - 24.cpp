#include <iostream>

using namespace std;

int soma(int n){
    if(n == 0){
        return 0;
    }else{
        return n + soma(n-1);
    }
}

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Soma dos numeros de 1 a " << n << " = " << soma(n) << endl;
    return 0;
}