#include<iostream>
#include <locale.h>

using namespace std;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int area, base, altura;
	
	cout << "\nDigite o valor da base do triângulo:\n";
	cin >> base;
	
	cout << "Digite o valor da altura do triângulo:\n";
	cin >> altura;
	
	area = base * altura / 2;
	
	cout << "\nA área do triângulo é: " << area << endl;
	
	return 0;
	
}
