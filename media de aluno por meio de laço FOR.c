#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicio do algoritmo
void cabecalho () {
	system("cls || clear");
	printf("\n=== Média em Laço ===\n");
}

int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	float nota, media, soma;
	int i;
	
	//solicitando dados ao usuário por meio de laço de repetição
	cabecalho();
	for(i=1;i<=4;i++)	{
		printf("Digite sua %iª nota: ", i);
		scanf("%f",&nota);
	
		soma += nota;
	
	}
	
	//apresentando dados ao usuário, média
	cabecalho();
	media = soma/4;
	printf("Média aluno: %.2f", media);
	
	return 0;
}
