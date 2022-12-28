#include <iostream>

using namespace std;

int quadruploFatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * quadruploFatorial(n-4);
    }
}

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Quadruplo fatorial de " << n << " = " << quadruploFatorial(n) << endl;
    return 0;
}