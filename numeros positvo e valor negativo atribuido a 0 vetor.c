#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 5
	//inicio do código
void cabecalho() {
	system("cls || clear");
	printf("\n == Números e negativo atribuido 0 == \n");
}	
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis e vetores
	int numero[SIZE], negativo = 0;
	int i;
	//laço for com vetor
	cabecalho();
		printf("Digite um número\n");
		for(i=0;i<SIZE;i++){
			printf("Número o %iº: ", i+1);
			scanf("%i",&numero[i]);
			//if else para definir numeros pares e impares
			if(numero[i] < 0) {
				numero[i]=negativo;
			} 
			fflush(stdin);
		}
		//mostrando dados ao usuário.
	cabecalho();	
		printf("Resultado:\n");
		for(i=0;i<SIZE;i++){
			printf("Números escolhidos %i: %i\n", i+1, numero[i]);
		}
		
	
	return 0; 
	//fim do programa
}


