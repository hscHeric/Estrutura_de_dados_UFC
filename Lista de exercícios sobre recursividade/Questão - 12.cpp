#include <iostream>

using namespace std;

int hiperfatorial(int n){
    if(n == 0){
        return 1;
    }else{
        int fatorial = 1;
        for(int i = 1; i <= n; i++){
            fatorial *= i;
        }
        return fatorial * hiperfatorial(n-1);
    }
}

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Hiperfatorial de " << n << " = " << hiperfatorial(n) << endl;
    return 0;
}