#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int area, base, altura;
	
	printf("Digite o valor da base do tri�ngulo:\n");
	scanf("%i", &base);
	
	printf("Digite o valor da altura do tri�ngulo:\n");
	scanf("%i", &altura);
	
	area = base * altura / 2;
	
	printf("\nA �rea do tri�ngulo �: %i", area);
	
	return 0;
	
}
