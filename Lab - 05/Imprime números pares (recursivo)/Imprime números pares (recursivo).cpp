#include <iostream>

using namespace std;

void printEven(int n){
    if(n == 2){
        cout << n << endl;
    }else{
        printEven(n-1);
        if(n%2 == 0){
            cout << n << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    printEven(n);
    return 0;
}