#include<iostream>
#include <locale.h>
#define velo_som 340

using namespace std;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, tempo;
	
	cout << "Digite o tempo em segundos:\n";
	cin >> tempo;
	
	distancia = tempo * velo_som;
	
	cout << "\nA dist�ncia do raio �: " << distancia << " metros" << endl;
	
	return 0;
	
}
