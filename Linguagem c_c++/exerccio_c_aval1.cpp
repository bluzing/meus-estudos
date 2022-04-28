#include "iostream"
#include "math.h"
#include "cstdlib"
#define pi 3.14159
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    double volume=0,raio=0,altura=0;
    
    cout << "\nDigite um valor para o raio:\n";
    cin >> raio;
    
    cout << "\nDigite um valor para a altura:\n";
    cin >> altura;
    
    volume = pi*pow(raio, 2)*altura;
    
    cout << "\nO volume da lata de óleo é: " << volume << endl;
    
    system("pause");
    
    return 0;
}
