#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//incio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Soma de numeros com Função int ==\n");
}

int somar(float n1, float n2) {
	float soma;
	soma = n1 + n2;
	return soma;
}


int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	float primeiroNumero, segundoNumero, soma, media;

	//solicitando dados do usuario
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%f",&segundoNumero);
	
	//calulando dados 
	
	soma = somar(primeiroNumero, segundoNumero);
	
	media = soma / 2;
	//aprensentando dados ao usuario
	printf("Media: %.2f", media);
	
	return 0;
	//fim do programa
}
