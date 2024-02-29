#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Notas em Letras ==\n");
}	
int main () {
	setlocale(LC_ALL, "");
	
	//declarando variáveis
	float primeiraNota, segundaNota, media;
	char nome[20];
	char conceito; 
	
	//solicitando dados do usuário
	cabecalho();
	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	cabecalho();
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	cabecalho();
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	
	//calculando dados
	media = (primeiraNota+segundaNota) / 2;
	
	//estrutura condicional
	if (media>=9) {
		conceito = 'A';
	}	else if (media>= 7.5) {
		conceito = 'B';
	}	else if (media>= 6) {
		conceito = 'C';
	}	else if (media>= 4) {
		conceito = 'D';
	}	else {
		conceito = 'E';
	}
	
	//Exibindo dados
	cabecalho();
	printf("Nome do aluno: %s\n", nome);
	printf("Primeira nota: %.2f\n", primeiraNota);
	printf("Segunda nota: %.2f\n", segundaNota);
	printf("Media: %.2f\n", media);
	printf("Media: %.2f\n", media);
	printf("Conceito: %c\n", conceito);
	
	//apresentando se aluno aprovado ou reprovado.
	if(conceito == 'A' || conceito == 'B' || conceito == 'C') {
		printf("Aprovado !");
	}	else {
		printf("Reprovado !");
	}
	
	return 0;
	//fim do programa
}


