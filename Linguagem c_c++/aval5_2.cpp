#include <stdlib.h>
#include <locale.h>
#include <math.h>

int n1, n2, n3, maior; 

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		system("cls");
		
		printf("\nDigite 3 números separados por enter:\n");
		scanf("%i \n%i \n%i", &n1, &n2, &n3);
		
		if (n1 > n2 && n1 > n3){
			maior = n1;
		}else if (n2 > n1 && n2 > n3){
			maior = n2;
		}else{
			maior = n3;
		}
		
		printf("\nO maior número é: %i\n", maior);
		
		system("pause");
	
	goto repetir;
	
	return 0;
}
