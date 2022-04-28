#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int a, b, c;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	repetir:
		system("cls");
		
		printf("\nDigite os valores dos lados A, B e C do triângulo separados por enter:\n");
		scanf("%i \n%i \n%i", &a, &b, &c);
		
		if(a >= (b+c) || c >= (b+a)){
			
			printf("\nNaõ é um triângulo!\n");
			
		}else{ 
		
			printf("\nÉ um triângulo ");
			
			if(a==b && a==c){
			
				printf("equilátero!\n");
				
			}else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
				
				printf("isósceles!\n");
				
			}else if(a!=b && a!=c && b!=c){
				
				printf("escaleno!\n");
			}
		}
		
		system("pause");
	
	goto repetir;
	
	return 0;
}
		
		
