#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//inicio do algoritmo
void cabecalho () {
	system("cls || clear");
	printf("\n=== Média em Laço com Aprovado e Reprovado ===\n");
}
char* verificarAprovacao(float media){
	char resposta[100];
	
	if (media >= 7) 
		strcpy(resposta, "Aprovado!");
		else if	(media >=4)
		strcpy(resposta, "Recuperação!");
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
	
	//solicitando dados ao usuário por meio de laço de repetição
	cabecalho();
	for(i=1;i<=3;i++)	{
		printf("Digite sua %iª nota: ", i);
		scanf("%f",&nota);
	
		soma += nota;
	}
	
	//apresentando dados ao usuário, média
	cabecalho();
	media = soma/3;
	printf("Média aluno: %.2f\n", media);
	strcpy(resultado, verificarAprovacao(media));
	printf("Aluno: %s", resultado);
	
	return 0;
}
