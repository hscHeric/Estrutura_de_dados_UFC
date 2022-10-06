#include <iostream>

using namespace std;

void BubbleSort_v2(int *A, int N){
    int i, j, aux, troca = 0, interacoes = 0;
    for(i = 0; i < N; i++){
        for(j = 0; j < N - 1; j++){
            if(A[j] > A[j + 1]){
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
                troca = 1;
            }
        }
        interacoes++;
        if(troca == 0){
            break;
        }
        troca = 0;
    }
    cout << interacoes << endl;
}

int main(){
    int N, i;
    cin >> N;
    int A[N];
    for(i = 0; i < N; i++){
        cin >> A[i];
    }
    BubbleSort_v2(A, N);
    return 0;
}