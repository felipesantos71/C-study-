#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//incio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Funcao void com soma ==\n");
}

void somar(int n1, int n2) {
	int soma;
	soma = n1 + n2;
	printf("\nSoma: %i \n", soma);
}

int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int primeiroNumero, segundoNumero;
	
	//solicitando dados do usuario
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%i",&segundoNumero);
	
	//calulando dados 
	
	somar(primeiroNumero, segundoNumero);

	return 0;
	//fim do programa
}
