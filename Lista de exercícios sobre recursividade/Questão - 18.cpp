#include <iostream>

using namespace std;

float media(int vetor[], int n){
    if(n == 0){
        return 0;
    }else{
        return (vetor[n-1] + media(vetor, n-1)) / n;
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
    cout << "Media do vetor = " << media(vetor, n) << endl;
    return 0;
}