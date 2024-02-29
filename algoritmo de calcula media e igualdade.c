#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//incio do programa
void cabecalho () {
	system("cls || clear");
	printf("\nAlgoritmo de comparação,soma, produto e  igualdade\n");
	fflush(stdin);
}
int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int primeiroNumero, segundoNumero, media, soma, produto;
	
	//solicitando dados do usuario
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNumero);
	printf("Digite o segundo número: ");
	scanf("%i",&segundoNumero);
	
	//calculando numeros
	media = (primeiroNumero+segundoNumero) / 2;
	soma = primeiroNumero+segundoNumero;
	produto = primeiroNumero*segundoNumero;
	
	//apresentando dados
	cabecalho();
	printf("Primeiro numero: %i\n", primeiroNumero);
	printf("Segundo numero: %i\n", segundoNumero);
	printf("Média dos valores: %i\n", media);
	printf("Soma dos valores: %i\n", soma);
	printf("Produto dos valores: %i\n", produto);
	
	//estrutura condicional de menor, maior valor e igualdade.
	if (primeiroNumero>segundoNumero) {
		printf("Maior numero: %i\n", primeiroNumero);
		printf("Menor numero: %i\n", segundoNumero);
	}	else {
		printf("Maior numero: %i\n", segundoNumero);
		printf("Menor numero: %i\n", primeiroNumero);
    }
    
	if (primeiroNumero==segundoNumero){
		printf("Numeros são iguais!");
	}
	
	return 0;
	//fim do programa
}
