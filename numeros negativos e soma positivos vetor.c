#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 10
	//inicio do c�digo
void cabecalho() {
	system("cls || clear");
	printf("\n == N�meros Reais e Soma n�meros positivos Vetor == \n");
}	
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis e vetores
	float numero[SIZE], somaPositivo;
	int i, numeroNegativo = 0;
	//la�o for com vetor
	cabecalho();
		printf("Digite n�meros\n");
		for(i=0;i<SIZE;i++){
			printf("N�mero o %d�: ", i+1);
			scanf("%f",&numero[i]);
			//if else para definir numeros pares e impares
			if(numero[i] > 0) {
				somaPositivo+=numero[i];
			} else {
				numeroNegativo++;
			}
			fflush(stdin);
		}

		printf("N�meros negativos: %d\n", numeroNegativo);
		printf("Soma n�meros positivos: %.1f\n", somaPositivo);
	
	return 0; 
	//fim do programa
}


