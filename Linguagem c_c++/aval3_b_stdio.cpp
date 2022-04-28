#include <stdio.h>
#include <locale.h>
#define velo_som 340


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, tempo;
	
	printf("Digite o tempo em segundos:\n");
	scanf("%f", &tempo);
	
	distancia = tempo * velo_som;
	
	printf("\nA distância do raio é: %f metros", distancia);
	
	return 0;
	
}
