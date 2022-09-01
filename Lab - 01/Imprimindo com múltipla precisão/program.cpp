#include<iostream>
# include<iomanip>
#include<cmath>
using namespace std;

int main(void){
    int number = 0;
    cin >> number;
    cout << fixed;
    for(int i = 0; i <= 9; i++)
    {
        cout << setprecision (i) << sqrt(number) << "\n";
    }
    
    return 0;
}