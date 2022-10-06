#include <iostream>

using namespace std;

int mdc(int x, int y){
    if(y == 0){
        return x;
    }else{
        return mdc(y, x%y);
    }
}

int main()
{
    int x, y;
    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de Y: ";
    cin >> y;
    cout << "O MDC de X e Y é: " << mdc(x, y) << endl;
    return 0;
}