#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicio do algoritmo
void cabecalho () {
	system("cls || clear");
	printf("\n=== M�dia em La�o ===\n");
}

int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	float nota, media, soma;
	int i;
	
	//solicitando dados ao usu�rio por meio de la�o de repeti��o
	cabecalho();
	for(i=1;i<=4;i++)	{
		printf("Digite sua %i� nota: ", i);
		scanf("%f",&nota);
	
		soma += nota;
	
	}
	
	//apresentando dados ao usu�rio, m�dia
	cabecalho();
	media = soma/4;
	printf("M�dia aluno: %.2f", media);
	
	return 0;
}
