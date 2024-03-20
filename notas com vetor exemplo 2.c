#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	//incio do programa
void cabecalho() {
	system("cls || clear");
	printf("\nNotas com Vetor Exemplo 2\n");
}

char* verificarAprovacao(float media){
	char resposta[100];
	if (media >= 7) 
		strcpy(resposta, "Aprovado!");
		else if	(media >=5)
		strcpy(resposta, "Recuperação!");
		else
		strcpy(resposta, "Reprovado!");
	return resposta;	
}
int main() {
	setlocale(LC_ALL,"");
	
	//declarando vetor(array) e variáveis
		
	float media, soma, notaVetor[4];
	int i;
	char resultado[100];
	
	//solicitando dados do usuário com laço for.
	cabecalho();
	printf("Digite sua nota:\n");
	
	for (i=0;i<4;i++) {
		printf("Nota %i: ", i+1);
		scanf("%f",&notaVetor[i]);
		soma += notaVetor[i];
	}
		
	//apresentando dados ao usuário com laço.
	cabecalho();
	for (i=0;i<4;i++) {
		printf("Nota %i: %.2f\n", i+1, notaVetor[i]);
	}
	media = soma/i;
	printf("Média do aluno: %.2f\n", media);
	strcpy(resultado, verificarAprovacao(media));
	printf("Aluno: %s", resultado);
	 
	return 0;
	//fim do programa
}
