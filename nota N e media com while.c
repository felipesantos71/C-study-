#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicio do algoritmo
void cabecalho() {
	system("cls || clear");
	printf("\n == Media de aluno ==\n");
}
int main() {
	setlocale(LC_ALL, "");
	
	//declarando vari�veis
	int contador;
	float soma, nota, media;
	char continua;
	
	//solicitando dados do usu�rio
	cabecalho();
	do {
		
		printf("Digite uma nota : ");
		scanf("%f",&nota);
		fflush(stdin);
		contador = contador + 1;
		
		printf("Digite 'n' Se deseja escrever mais uma nota : ");
		scanf("%c",&continua);
		
		soma = soma + nota;	
			
	} while (continua == 'n');
	
	//apresentando dados ao usu�rio
	media = soma / contador;
	cabecalho();
	printf("M�dia do aluno: %.2f ", media);
	
	return 0;
//fim do algoritmo
}
