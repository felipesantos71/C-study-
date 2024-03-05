#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//incio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Soma de numeros com Função int ==\n");
}

int somar(int n1, int n2) {
	int soma;
	soma = n1 + n2;
	return soma;
}


int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int primeiroNumero, segundoNumero, soma;
	
	//solicitando dados do usuario
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%i",&segundoNumero);
	
	//calulando dados 
	
	soma = somar(primeiroNumero, segundoNumero);

	//aprensentando dados ao usuario
	printf("Soma: %i", soma);
	
	return 0;
	//fim do programa
}
