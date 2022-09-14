#include <iostream>

using namespace std;
void imprimePrimos(int n){
    if(n == 0){
        return;
    }else{
        imprimePrimos(n-1);
        int cont = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                cont++;
            }
        }
        if(cont == 2){
            cout << n << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Os numeros primos de 0 a " << n << " sao: ";
    imprimePrimos(n);
    return 0;
}