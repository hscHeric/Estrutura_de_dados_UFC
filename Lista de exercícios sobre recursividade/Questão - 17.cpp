/*Implemente uma fun¸c˜ao recursiva para resolver o seguinte problema: dado um vetor
com n n´umeros inteiros positivos e um outro n´umero inteiro positivo x, determine
se existem ou n˜ao dois elementos cuja soma ´e igual a x*/

#include <iostream>

using namespace std;

bool soma(int *v, int n, int x){
    if(n == 0){
        return false;
    }else{
        for(int i = 0; i < n; i++){
            if(v[i] + v[n-1] == x){
                return true;
            }
        }
        return soma(v, n-1, x);
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
    if(soma(vetor, n, x)){
        cout << "Existe dois elementos cuja soma é igual a " << x << endl;
    }else{
        cout << "Não existe dois elementos cuja soma é igual a " << x << endl;
    }
    return 0;
}