#include<iostream>
#include <locale.h>

using namespace std;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int area, base, altura;
	
	cout << "\nDigite o valor da base do tri�ngulo:\n";
	cin >> base;
	
	cout << "Digite o valor da altura do tri�ngulo:\n";
	cin >> altura;
	
	area = base * altura / 2;
	
	cout << "\nA �rea do tri�ngulo �: " << area << endl;
	
	return 0;
	
}
