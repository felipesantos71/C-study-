#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 2
	//inicio do código
void cabecalho() {
	system("cls || clear");
	printf("\n == Nome e idade com Vetor == \n");
}	
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis e vetores
	int idade[SIZE], i;
	char nome[SIZE][100];
	
	//laço for com vetor
	cabecalho();
	for(i=0;i<SIZE;i++) {
		printf("Digite seu nome: ");
		scanf("%s",&nome[i]);
		printf("Digite sua idade: ");
		scanf("%i",&idade[i]);
	}
	//apresentando dados com for e vetor
	for(i=0;i<SIZE;i++) {
		printf("Nome: %s \n", nome[i]);
		printf("Idade: %i \n", idade[i]);
	}
	
	return 0; 
	//fim do programa
}


