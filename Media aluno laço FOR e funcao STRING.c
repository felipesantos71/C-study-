#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//inicio do algoritmo
void cabecalho () {
	system("cls || clear");
	printf("\n=== M�dia em La�o com Aprovado e Reprovado ===\n");
}
char* verificarAprovacao(float media){
	char resposta[100];
	
	if (media >= 7) 
		strcpy(resposta, "Aprovado!");
		else if	(media >=4)
		strcpy(resposta, "Recupera��o!");
		else
		strcpy(resposta, "Reprovado!");

	return resposta;	
}
int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	float nota, media, soma;
	int i;
	char resultado[100];
	
	//solicitando dados ao usu�rio por meio de la�o de repeti��o
	cabecalho();
	for(i=1;i<=3;i++)	{
		printf("Digite sua %i� nota: ", i);
		scanf("%f",&nota);
	
		soma += nota;
	}
	
	//apresentando dados ao usu�rio, m�dia
	cabecalho();
	media = soma/3;
	printf("M�dia aluno: %.2f\n", media);
	strcpy(resultado, verificarAprovacao(media));
	printf("Aluno: %s", resultado);
	
	return 0;
}
