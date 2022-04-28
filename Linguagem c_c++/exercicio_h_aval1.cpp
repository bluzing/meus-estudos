#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    double volume=0,comprimento=0,largura=0,altura=0;
    
    cout << "\nDigite o comprimento da caixa:\n";
    cin >> comprimento;
    
    cout << "\nDigite a largura da caixa:\n";
    cin >> largura;
    
    cout << "\nDigite a altura da caixa:\n";
    cin >> altura;
    
    volume = comprimento * largura * altura;
    
    cout << "\nO volume da caixa é: " << volume << endl;
    
    system("pause");
    
    return 0;
}
