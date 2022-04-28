#include"iostream"
#include"math.h"
#include"cstdlib"
using namespace std;

char sexo;
string msg;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		system("cls");
		cout << "\nDigite o sexo (F/M): ";
		cin >> sexo;
		
		if (sexo == 'F'){
			
			msg = "Você é do sexo feminino!";
			
		}else if (sexo != 'F' && sexo != 'M'){
			
			msg = "Letra não identificada, digite novamente!";
			
		}else {
			msg = "Você é do sexo masculino";
		}
		
		cout << msg << endl << endl;
		system("pause");
	
	goto repetir;
	
	return 0;
}
