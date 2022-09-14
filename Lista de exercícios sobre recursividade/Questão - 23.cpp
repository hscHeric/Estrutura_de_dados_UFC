// Fa¸ca uma fun¸c˜ao recursiva que permita somar os elementos de um vetor de inteiros

#include <iostream>

using namespace std;

int soma(int *v, int n){
    if(n == 0){
        return 0;
    }else{
        return v[n-1] + soma(v, n-1);
    }
}

int main(){
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int vetor[n];
    for(int i = 0; i < n; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: ";
        cin >> vetor[i];
    }
    cout << "Soma dos elementos do vetor = " << soma(vetor, n) << endl;
    return 0;
}