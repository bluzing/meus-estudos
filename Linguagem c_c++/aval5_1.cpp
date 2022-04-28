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
		
		printf("\nDigite o n�mero de lados do pol�gono:\n");
		scanf("%i", &numLados);
		
		printf("\nDigite a medida dos lados do pol�gono:\n");
		scanf("%i", &medLado);
		
		if (numLados == 3) {
			
			p = (medLado + medLado + medLado)/2;
			area = sqrt(p*pow(p-medLado, 3));
			
			printf("\nO pol�gono � um TRI�NGULO\n");
			
		}else if (numLados == 4){
			
			area = pow(medLado, 2);
			
			printf("\nO pol�gono � um QUADRADO\n");
			
		}else if (numLados == 5){
			
			area = 0.25*sqrt(5*(5+2*sqrt(5))*pow(medLado, 2));
			
			printf("\nO pol�gono � um PENTAGONO\n");
			
		}else if (numLados<3){
			
			printf("\nN�o � um pol�gono\n");
			area = 0;
			
		}else if (numLados>5){
			
			printf("\nPol�gono n�o identificado\n");
			area = 0;
			
		}
		
		printf("\n�rea: %.2f\n", area);
		system("pause");
	
	goto repetir;
	
	return 0;
}
