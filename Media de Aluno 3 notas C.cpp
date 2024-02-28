#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Media aluno 3 Notas==\n");
	fflush(stdin);
}	

int main () {
	//declarando variaveis
	float media, primeiraNota, segundaNota, terceiraNota;
	int idade;
	char nome[20];
	
	//solicitando dados o usuario
	cabecalho();
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	printf("Digite sua primeira nota: ");
	scanf("%f",&primeiraNota);
	printf("Digite sua segunda nota: ");
	scanf("%f",&segundaNota);
	printf("Digite sua terceira nota: ");
	scanf("%f",&terceiraNota);
	
	//calculando dados
	media = (primeiraNota+segundaNota+terceiraNota) / 3;
	
	//informando dados ao aluno
	cabecalho();
	printf("Aluno: %s\n", nome);
	printf("Idade do aluno: %i\n", idade);
	printf("Media do Aluno: %.2f\n", media);
	
	//estrutura condicional de aprovado ou reprovado
	if (media>= 7) {
		printf("Aprovado !");
	}	else {
		printf("Reprovado !");
	}
	
	return 0;
	//fim do programa
}
