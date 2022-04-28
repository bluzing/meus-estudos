#include <stdio.h>
#include <locale.h>
#include <math.h>
#define g 9.8


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura, tq;
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	tq = sqrt(2*altura) / g;
	
	printf("\nTQ: %f", tq);
	
	return 0;
	
}
