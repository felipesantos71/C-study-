//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n == Par ou impar ==\n");
}
void verificarParImpar (int numero) {
	if (numero % 2 == 0) {        // ou if else dessa maneira exemplo: numero % 2 == 0 ? printf("Número é par.") : printf("Número é impar.");
		printf("Número é par.");
	}	else {
		printf("Número é impar.");
	}	
}
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis
	int numero;
		
	//solicitando dados do usuario
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%i",&numero);
		
	//apresentando dados ao usuario
	cabecalho();
	verificarParImpar(numero);
	
	return 0;
	//fim do programa
}
