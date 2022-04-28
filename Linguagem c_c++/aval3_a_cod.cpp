#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int area, base, altura;
	
	printf("Digite o valor da base do triângulo:\n");
	scanf("%i", &base);
	
	printf("Digite o valor da altura do triângulo:\n");
	scanf("%i", &altura);
	
	area = base * altura / 2;
	
	printf("\nA área do triângulo é: %i", area);
	
	return 0;
	
}
