#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int a, b, c;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		system("cls");
		
		printf("\nDigite os valores dos lados A, B e C do tri�ngulo separados por enter:\n");
		scanf("%i \n%i \n%i", &a, &b, &c);
		
		if(a >= (b+c) || c >= (b+a)){
			
			printf("\nNa� � um tri�ngulo!\n");
			
		}else{ 
		
			printf("\n� um tri�ngulo ");
			
			if(a==b && a==c){
			
				printf("equil�tero!\n");
				
			}else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
				
				printf("is�sceles!\n");
				
			}else if(a!=b && a!=c && b!=c){
				
				printf("escaleno!\n");
			}
		}
		
		system("pause");
	
	goto repetir;
	
	return 0;
}
		
		
