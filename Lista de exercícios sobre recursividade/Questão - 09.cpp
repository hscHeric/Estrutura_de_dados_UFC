#include <iostream>

using namespace std;

int duploFatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * duploFatorial(n-2);
    }
}

int main()
{
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "O fatorial duplo de " << n << " eh: " << duploFatorial(n);
    return 0;
}