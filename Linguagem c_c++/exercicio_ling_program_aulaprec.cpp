#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, notaAtiv, notaRec, rec, ativ, media;
	
	repetir:
		system("cls");
		
		printf("\n-->Digite a primeira nota: \n");
		scanf("%f", &nota1);
		
		printf("\n-->Digite a segunda nota: \n");
		scanf("%f", &nota2);
		
		printf("\n-->Digite a terceira nota: \n");
		scanf("%f", &nota3);
		
		media = (nota1*1+nota2*2+nota3*3)/6;
		
		printf("\nMédia: %.2f", media);
		
		if (media<=3){
			
			printf("\nRetido!\n");
			
		}else if(media>3 && media<=5){
			
			printf("\nRecuperação! Pode fazer nova atividade.\n");
			
			printf("\n-->Digite a nota da atividade: ");
			scanf("%f", &notaAtiv);
			
			ativ = (media + notaAtiv)/2;
			printf("\nNova média com atividade: %.2f", ativ);
			
			if (ativ<6){
				
				printf("\nRecuperação Final!\n");
				printf("\n-->Digite a nota de rec: \n");
				scanf("%f", &notaRec);
				
				rec = (nota1 + notaAtiv + notaRec)/3;
				printf("\nNova média com recuperação: %.2f\n", rec);
				
				if(rec <7){
					
					printf("\nRetido!\n");
					
				}else{
					
					printf("\nAprovado com recuperação!\n");
				}
				
			}else{
				
				printf("\nAprovado!\n");
			}
		
		}else if(media>=5 && media<6){
			
			printf("\nAluno de exame!\n");
			
			printf("\n-->Digite a nova nota: ");
			scanf("%f", &notaAtiv);
				
			media = (media + notaAtiv)/2;
			printf("\nMedia com nota do exame: %.2f", media);
			
			if(media<6){
				
				printf("\nRetido!\n");
				
			}else{
				
				printf("\nAprovado!\n");	
			}
			
		}else if (media>=6){
			
			printf("\nAprovado!\n");
		}
	
		system("pause");
		
	goto repetir;
	
	return 0;
}
