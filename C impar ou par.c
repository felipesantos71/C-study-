#include <stdio.h>
#include <stdlib.h>
	//inicio do programa
void cabecalho () {
	system("cls || clean");
	printf("\n === Par ou Impar === \n")
}	
int main() {
	//declarando variaveis
	int numero;
	
	//solicitando dados do usuario
	cabecalho();
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	//apresantando resultados, estrutura condicional (se).
	cabecalho();
	if (numero % 2 == 0) {
		printf("Numero par.");
	}	else {
		printf("Numero impar.");
	}
	return 0;
	
	//fim do programa
}



















