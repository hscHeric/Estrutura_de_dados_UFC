#include <iostream>

using namespace std;

int contarCaracter(string s, char c, int n){
    if(n == 0){
        return 0;
    }else{
        if(s[n-1] == c){
            return 1 + contarCaracter(s, c, n-1);
        }else{
            return contarCaracter(s, c, n-1);
        }
    }
}

int main(){
    string s;
    char c;
    cout << "Digite uma string: ";
    cin >> s;
    cout << "Digite um caractere: ";
    cin >> c;
    cout << "O caractere " << c << " apareceu " << contarCaracter(s, c, s.size()) << " vezes na string" << endl;
    return 0;
}