#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//incio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Soma de numeros com Função int ==\n");
}

float calcularMedia(float n1, float n2) {
	float media;
	media = (n1 + n2) / 2;
	return media;
}


int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	float primeiroNumero, segundoNumero, media;

	//solicitando dados do usuario
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%f",&segundoNumero);
	
	//calulando dados 
	
	media = calcularMedia(primeiroNumero, segundoNumero);
	
	//aprensentando dados ao usuario
	printf("Media: %.2f", media);
	
	return 0;
	//fim do programa
}
