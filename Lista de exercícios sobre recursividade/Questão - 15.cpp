#include <iostream>

using namespace std;

int decimalParaBinario(int n){
    if(n == 0){
        return 0;
    }else{
        return n % 2 + 10 * decimalParaBinario(n/2);
    }
}

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Binario de " << n << " = " << decimalParaBinario(n) << endl;
    return 0;
}