#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    double temp=0,f=0;
    
    cout << "\nDigite uma temperatura em Celsius:\n";
    cin >> temp;
    
    f = (9*temp+160)/5;
    cout << "\nA temperatura em Fahrenheit é: " << f << endl;
    
    system("pause");
    
    return 0;
}

