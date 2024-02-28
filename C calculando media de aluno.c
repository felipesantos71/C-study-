#include <stdio.h>
//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n == Media de aluno == \n"); 
}

int main() {
	//declarando variaveis
	char nome[30];
	int idade;
	float nota1, nota2, nota3, nota4, media;
	
	//solicitando dados do 
	cabecalho();
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	printf("Digite sua primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite sua segunda nota: ");
	scanf("%f",&nota2);
	printf("Digite sua terceira nota: ");
	scanf("%f",&nota3);
	printf("Digite sua quarta nota: ");
	scanf("%f",&nota4);
	
	//apresetando dados do usuário
	cabecalho();
	printf("Nome do aluno: %s \n", nome);
	printf("Idade do aluno: %i \n", idade);
	printf("Primeira nota: %.1f \n", nota1);
	printf("Segunda nota: %.1f \n", nota2);
	printf("Terceira nota: %.1f \n", nota3);
	printf("Quarta nota: %.1f \n", nota4);
	printf("Media: %.1f \n", media = (nota1+nota2+nota3+nota4)/4);
	return 0;
	
	//fim do programa
}

