#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int n1, n2, resultado;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		system("cls");
		
		printf("\nDigite um número inteiro: ");
		scanf("%i", &n1);
		
		printf("\nDigite outro número inteiro: ");
		scanf("%i", &n2);
		
		if (n1 > n2){
			resultado = n1 - n2;
		}else{
			resultado = n2 - n1;
		}
		
		printf("\nO resultado da diferença dos dois números é: %i\n", resultado);
		
		system("pause");
		
	goto repetir;
	
	return 0;
		
}
