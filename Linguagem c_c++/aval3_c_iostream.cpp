#include<iostream>
#include <locale.h>
#include <math.h>
#define g 9.8

using namespace std;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura, tq;
	
	cout << "Digite a altura:\n";
	cin >> altura;
	
	tq = sqrt(2*altura) / g;
	
	cout << "\nTQ: " << tq << endl;
	
	return 0;
	
}
