#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	double temp=0,f=0;
	
	cout <<  "\nDigite uma temperatura em Celsius:\n";
	cin >> temp;
	
	f = (9*temp+160)/5;
	cout <<  "\nA temperatura em Fahrenheit é: " << f << endl;
	
	system("pause");
	
	return 0;
}
