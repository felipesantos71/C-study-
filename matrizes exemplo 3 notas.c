#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void cabecalho () {
	system("cls || clear");
	printf("Matrizes exemplo 3 Nota de 2 alunos\n");
}
int main () {
	setlocale(LC_ALL,"");	
	//declarando matrizes e variaveis.
	char alunos[2][200]; //vetor para dois nomes.
	float notas[2][3]; //matriz com 3 notas para dois alunos.
	int i, j;
	//usando laco for com matrizes para pedir dados do usuário.
	cabecalho();
	for (i=0;i<2;i++) {
		printf("\nDigite o nome do %iº aluno:", i+1);
		scanf("%s",&alunos[i]);
		
		for (j=0;j<3;j++) {
			printf("\nDigite a %iª nota:", j+1);
			scanf("%f",&notas[i][j]);
		}
		
		printf("\n"); // para pular uma linha
	}
	
	//exibindo dados com laço for para usuário.
	cabecalho();
	for (i=0;i<2;i++) {
		printf("\n%i aluno: %s",i+1, alunos[i]);
		
		for (j=0;j<3;j++) {
			printf("\n%iª nota: %.1f",j+1, notas[i][j]);
		}
		printf("\n"); // para pular uma linha
	}
	return 0;
	//fim do programa
}
