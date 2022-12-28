#include <iostream>

using namespace std;

string inverterString(string s, int n){
    if(n == 0){
        return "";
    }else{
        return s[n-1] + inverterString(s, n-1);
    }
}

int main(){
    string s;
    cout << "Digite uma string: ";
    cin >> s;
    cout << "String invertida: " << inverterString(s, s.size()) << endl;
    return 0;
}