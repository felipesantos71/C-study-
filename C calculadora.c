#include <stdio.h>
#include <stdlib.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Calculadora ==\n");
}	

int main () {
	//declarando variaveis
	int primeiroValor, segundoValor, soma, subtracao, multiplicacao, divisao;
	
	//solicitando dados do usuário
	cabecalho();
	printf("Digite o primeiro valor: ");
	scanf("%i",&primeiroValor);
	printf("Digite o segundo valor: ");
	scanf("%i",&segundoValor);
	
	//apresentando dados ao usuario
	cabecalho();
	printf("Resultado da soma: %i \n", soma = primeiroValor+segundoValor);
	printf("Resultado da subtracao: %i \n", subtracao = primeiroValor-segundoValor);
	printf("Resultado da multiplicacao: %i \n", multiplicacao = primeiroValor*segundoValor);
	printf("Resultado da divisao: %i \n", divisao = primeiroValor/segundoValor);
	
	return 0;
}
