#include <iostream>

using namespace std;

int palindromo(string s, int n){
    if(n == 0){
        return 1;
    }else{
        if(s[n-1] == s[s.size()-n]){
            return palindromo(s, n-1);
        }else{
            return 0;
        }
    }
}

int main(){
    string s;
    cout << "Digite uma string: ";
    cin >> s;
    if(palindromo(s, s.size())){
        cout << "A string e palindroma" << endl;
    }else{
        cout << "A string nao e palindroma" << endl;
    }
    return 0;
}