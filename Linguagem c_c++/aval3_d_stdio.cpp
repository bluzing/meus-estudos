#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float diametro, perimetro, raio, area;
	
	printf("Digite o perímetro:\n");
	scanf("%f", &perimetro);
	
	diametro = perimetro / pi;
	raio = diametro / 2;
	area = raio * raio * pi;
	
	printf("\nA área é: %f", area);
	
	return 0;
	
}
