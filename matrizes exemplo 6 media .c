#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define DISCIPLINA 3
#define NOTA 2

void cabecalho () {
	system("cls || clear");
	printf("Matrizes exemplo 6 Disciplina Média\n");
}

char* verificarAprovacao(float media[], int i){
	char resposta[100];
	
		if (media[i] >= 7) 
		strcpy(resposta, "Aprovado!");
		else if	(media[i]>=5)
		strcpy(resposta, "Recuperação!");
		else
		strcpy(resposta, "Reprovado!");
	return resposta;	
}

int main () {
	setlocale(LC_ALL,"");	
	
	//declarando matrizes e variaveis.
	char resultado[100];
	char disciplina[DISCIPLINA][200]; //vetor para dois nomes.
	float notas[DISCIPLINA][NOTA];
	float media[DISCIPLINA], soma=0; 
	int i, j;
	//usando laco for com matrizes para pedir dados do usuário.
	
	cabecalho();
	for (i=0;i<DISCIPLINA;i++) {
		printf("\nDigite a %d disciplina:", i+1);
		scanf("%s",&disciplina[i]);
		
		for (j=0;j<NOTA;j++) {
			printf("\nDigite a %iª nota:", j+1);
			scanf("%f",&notas[i][j]);
			
			soma+=notas[i][j];
		}
		
		media[i]=soma/NOTA;
		soma=0;
	}
	
	//exibindo dados com laço for para usuário.
	cabecalho();
	for (i=0;i<DISCIPLINA;i++) {
		printf("\n%d disciplina: %s",i+1, disciplina[i]);
		
		for (j=0;j<NOTA;j++) {
			printf("\n%iª nota: %.1f",j+1, notas[i][j]);
		}
		
		printf("\nMédia da %s: %1.f \n", disciplina[i], media[i]);
		
		strcpy(resultado, verificarAprovacao(media, i));
		printf("\nResultado: %s", resultado);
		
	}
	return 0;
	//fim do programa
}
