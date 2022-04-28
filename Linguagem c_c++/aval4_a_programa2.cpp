#include"iostream"
#include"math.h"
#include"cstdlib"
using namespace std;

double n1, n2, media;
string status;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		system("cls");
		cout << "\nLer notas 1 e 2 separadas por enter: ";
		cin >> n1;
		cin >> n2;
		
		media = (n1 + n2)/2;
		
		if (media < 3){
			
			status = "ALUNO REPROVADO!";
			
		}else if (media >= 3 && media < 5){
			
			status = "ALUNO DE RECUPERAÇÃO";
			
		}else if (media >= 5 && media < 6){
			
			status = "ALUNO DE EXAME!";
			
		}else{
			status = "ALUNO APROVADO!";
		}
		
		cout << "\nA média do aluno foi: " << media;
		cout << endl << status << endl << endl;
		system("pause");
		
	goto repetir;
		
	return 0;
}
