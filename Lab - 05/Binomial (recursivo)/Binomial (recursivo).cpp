#include <iostream>

using namespace std;

int combinacao(int n, int k){
    if(k == 0 || k == n){
        return 1;
    }else{
        return combinacao(n-1, k-1) + combinacao(n-1, k);
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << combinacao(n, k) << endl;
    return 0;
}