#include <iostream>

using namespace std;

int menorElemento(int vetor[], int tamanho){
    if(tamanho == 1){
        return vetor[0];
    }else{
        int menor = menorElemento(vetor, tamanho-1);
        if(menor < vetor[tamanho-1]){
            return menor;
        }else{
            return vetor[tamanho-1];
        }
    }
}

int main(){
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    int vetor[tamanho];
    for(int i = 0; i < tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: ";
        cin >> vetor[i];
    }
    cout << "Menor elemento do vetor = " << menorElemento(vetor, tamanho) << endl;
    return 0;
}