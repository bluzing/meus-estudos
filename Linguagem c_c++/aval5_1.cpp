#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int numLados, medLado; 
float area, p, raiz;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		system("cls");
		
		printf("\nDigite o número de lados do polígono:\n");
		scanf("%i", &numLados);
		
		printf("\nDigite a medida dos lados do polígono:\n");
		scanf("%i", &medLado);
		
		if (numLados == 3) {
			
			p = (medLado + medLado + medLado)/2;
			area = sqrt(p*pow(p-medLado, 3));
			
			printf("\nO polígono é um TRIÂNGULO\n");
			
		}else if (numLados == 4){
			
			area = pow(medLado, 2);
			
			printf("\nO polígono é um QUADRADO\n");
			
		}else if (numLados == 5){
			
			area = 0.25*sqrt(5*(5+2*sqrt(5))*pow(medLado, 2));
			
			printf("\nO polígono é um PENTAGONO\n");
			
		}else if (numLados<3){
			
			printf("\nNão é um polígono\n");
			area = 0;
			
		}else if (numLados>5){
			
			printf("\nPolígono não identificado\n");
			area = 0;
			
		}
		
		printf("\nÁrea: %.2f\n", area);
		system("pause");
	
	goto repetir;
	
	return 0;
}
