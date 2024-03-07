//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n == Calculadora ==\n");
}
float somar(int n1, int n2) {
	int soma;
	soma = (n1+n2);
	return soma;
}
float subtrair(int n1, int n2) {
	int subtracao;
	subtracao = (n1-n2);
	return subtracao;
}
float multiplicar(int n1, int n2) {
	int multiplicacao;
	multiplicacao = (n1*n2);
	return multiplicacao;
}
float dividir(int n1, int n2) {
	int divisao;
	divisao = (n1/n2);
	return divisao;
}
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis
	float numeroPrimario, numeroSecundario;
	float soma, subtracao, multiplicacao, divisao;
	
	//solicitando dados do usuario
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%f",&numeroPrimario);
	printf("Digite o segundo número: ");
	scanf("%f",&numeroSecundario);
	
	//calculando resultados com chamado de funcao
	soma = somar(numeroPrimario, numeroSecundario); 
	subtracao = subtrair(numeroPrimario, numeroSecundario);
	multiplicacao = multiplicar(numeroPrimario, numeroSecundario);
	divisao = dividir(numeroPrimario, numeroSecundario);
	
	//apresentando dados ao usuario
	cabecalho();
	printf("\nResultado das operações com números: %.2f", soma);
	printf("\nResultado das operações com números: %.2f", subtracao);
	printf("\nResultado das operações com números: %.2f", multiplicacao);
	printf("\nResultado das operações com números: %.2f", divisao);
	
	return 0;
	//fim do programa
}
