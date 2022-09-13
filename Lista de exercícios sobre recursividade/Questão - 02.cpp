#include <iostream>

using namespace std;

int* inverte(int *vetor, int n){
    if(n == 0){
        return vetor;
    }else{
        int aux = vetor[n-1];
        vetor[n-1] = vetor[0];
        vetor[0] = aux;
        return inverte(vetor+1, n-2);
    }
}

int main()
{
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int vetor[n];
    for(int i = 0; i < n; i++){
        cout << "Digite o valor da posição " << i << ": ";
        cin >> vetor[i];
    }
    cout << "O vetor invertido é: ";
    inverte(vetor, n);
    return 0;
}