#include<iostream>
#include <locale.h>
#include <math.h>
#define pi 3.14

using namespace std;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float diametro, perimetro, raio, area;
	
	cout << "Digite o per�metro:\n";
	cin >> perimetro;
	
	diametro = perimetro / pi;
	raio = diametro / 2;
	area = raio * raio * pi;
	
	cout << "\nA �rea �: " << area << endl;
	
	return 0;
	
}
