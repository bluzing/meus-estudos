#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int a, b, c, delta, x1, x2;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		system("cls");
		
		printf("\nDigite o valor de a: ");
		scanf("%i", &a);
		
		printf("\nDigite o valor de b: ");
		scanf("%i", &b);
		
		printf("\nDigite o valor de c: ");
		scanf("%i", &c);
		
		if (a != 0){
			
			delta = pow(b, 2) - 4 * a * c;
			x1 = (-b + sqrt(delta)) / 2 * a;
			x2 = (-b - sqrt(delta)) / 2 * a;
			printf("\nAs raízes da equação de segundo grau %ix^2 + %ix + %i são: x1= %i e x2= %i\n", a, b, c, x1, x2);
			
		}else{
			
			printf("\nTente novamente, o valor de a tem que ser diferente de zero!\n");
			
		}
		
		system("pause");
	goto repetir;
	
	return 0;
		
}
