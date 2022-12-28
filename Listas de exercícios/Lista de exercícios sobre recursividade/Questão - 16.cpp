#include <iostream>

using namespace std;

int multiplicacaoARussa(int a, int b){
    if(a == 1){
        return b;
    }else{
        if(a % 2 == 0){
            return multiplicacaoARussa(a/2, b*2);
        }else{
            return b + multiplicacaoARussa(a/2, b*2);
        }
    }
}

int main(){
    int a, b;
    cout << "Digite dois numeros: ";
    cin >> a >> b;
    cout << "Multiplicacao a russa de " << a << " e " << b << " = " << multiplicacaoARussa(a, b) << endl;
    return 0;
}