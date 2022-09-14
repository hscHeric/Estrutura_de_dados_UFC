#include <iostream>

using namespace std;
int superfatorial(int n){
    if(n == 0){
        return 1;
    }else{
        int fatorial = 1;
        for(int i = 1; i <= n; i++){
            fatorial *= i;
        }
        return fatorial * superfatorial(n-1);
    }
}

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Superfatorial de " << n << " = " << superfatorial(n) << endl;
    return 0;
}