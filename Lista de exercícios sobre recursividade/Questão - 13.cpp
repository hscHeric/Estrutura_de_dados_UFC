#include <iostream>

using namespace std;

int fatorialExponencial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorialExponencial(n-1);
    }
}

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Fatorial exponencial de " << n << " = " << fatorialExponencial(n) << endl;
    return 0;
}