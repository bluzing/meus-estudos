#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int n;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		
		system("cls");
		
		printf("\nDigite um n�mero inteiro: ");
		scanf("%i", &n);
		
		if (n < 0){
			n = n * -1;
		}
		
		printf("\nM�dulo do n�mero digitado: %i\n", n);
		
		system("pause");
		
	goto repetir;
	
	return 0;
		
}
