#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 6
	//inicio do código
void cabecalho() {
	system("cls || clear");
	printf("\n == Números pares e ímpares == \n");
}	
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis e vetores
	int numero[SIZE], pares = 0, impares = 0;
	int i;
	//laço for com vetor
	cabecalho();
		printf("Digite um número\n");
		for(i=0;i<SIZE;i++){
			printf("Número o %iº: ", i+1);
			scanf("%i",&numero[i]);
			//if else para definir numeros pares e impares
			if(numero[i] % 2==0) {
				pares++;
			} else {
				impares ++;
			}
			fflush(stdin);
		}
		//mostrando dados ao usuário.
	cabecalho();	
		printf("Resultado:\n");
		for(i=0;i<SIZE;i++){
			printf("Números escolhidos %i: %i\n", i+1, numero[i]);
		}
		printf("Números pares: %i\n", pares);
		printf("Números impares: %i\n", impares);
	
	return 0; 
	//fim do programa
}


