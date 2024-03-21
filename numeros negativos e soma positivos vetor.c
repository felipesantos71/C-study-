#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 10
	//inicio do código
void cabecalho() {
	system("cls || clear");
	printf("\n == Números Reais e Soma números positivos Vetor == \n");
}	
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis e vetores
	float numero[SIZE], somaPositivo;
	int i, numeroNegativo = 0;
	//laço for com vetor
	cabecalho();
		printf("Digite números\n");
		for(i=0;i<SIZE;i++){
			printf("Número o %dº: ", i+1);
			scanf("%f",&numero[i]);
			//if else para definir numeros pares e impares
			if(numero[i] > 0) {
				somaPositivo+=numero[i];
			} else {
				numeroNegativo++;
			}
			fflush(stdin);
		}

		printf("Números negativos: %d\n", numeroNegativo);
		printf("Soma números positivos: %.1f\n", somaPositivo);
	
	return 0; 
	//fim do programa
}


