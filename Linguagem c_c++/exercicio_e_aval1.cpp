#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

	double prestacao=0,valor=0,taxa=0,tempo=0;
	
	cout << "\nDigite o valor da prestação: \n";
    cin >> valor;
    
    cout << "\nDigite o valor da taxa: \n";
    cin >> taxa;
    
    cout << "\nDigite o tempo: \n";
    cin >> tempo;
    
    prestacao = valor + (valor*(taxa/100)*tempo);
    
    cout << "\nA prestação em atraso é de: R$" << prestacao << endl;
    
    system("pause");
	
	return 0;
}

