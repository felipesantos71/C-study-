#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n=== Media de aluno com 3 Notas ===\n");
}
char* verificarAprovacao(float media){
	char resposta[100];
	
	if (media >= 7) 
		strcpy(resposta, "Aprovado!");
		else if	(media >=5)
		strcpy(resposta, "Recupera��o!");
		else
		strcpy(resposta, "Reprovado!");

	return resposta;	
}
int main() {
	setlocale(LC_ALL, "");
	//declarando variaveis
	float nota, media, soma;
	int i;
	char resultado[100];
	
	//calculando nota e por meio do la�o
	cabecalho();
	for (i=1; i<=3;i++){
		do {
			
			printf("Digite um n�mero de 0 at� 10: \n");	
			printf("Digite o %i� n�mero: ", i);
			scanf("%f",&nota);
					
		} while (nota >10 || nota <0);
		
		soma = soma + nota;
	}
			
	//exibindo quantidade de vezes que o la�o de repeti��o aconteceu.
	media = soma/3;
	cabecalho();
	printf("M�dia aritm�tica: %.2f\n", media);
	strcpy(resultado, verificarAprovacao(media));
	printf("Aluno: %s\n", resultado);
	
	return 0;
}
