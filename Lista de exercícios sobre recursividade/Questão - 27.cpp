#include <iostream>

using namespace std;

int pertence(int *v, int n, int x){
    if(n == 0){
        return 0;
    }else{
        if(v[n-1] == x){
            return 1;
        }else{
            return pertence(v, n-1, x);
        }
    }
}

int main(){
    int n, x;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int vetor[n];
    for(int i = 0; i < n; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: ";
        cin >> vetor[i];
    }
    cout << "Digite um numero: ";
    cin >> x;
    if(pertence(vetor, n, x)){
        cout << "O numero " << x << " pertence ao vetor" << endl;
    }else{
        cout << "O numero " << x << " nao pertence ao vetor" << endl;
    }
    return 0;
}
