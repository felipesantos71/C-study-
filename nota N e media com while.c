#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> //converter caractere para maiusculo
//inicio do algoritmo
void cabecalho() {
	system("cls || clear");
	printf("\n == Media de aluno ==\n");
}
int main() {
	setlocale(LC_ALL, "");
	
	//declarando variáveis
	int contador;
	float soma, nota, media;
	char continua;
	
	//solicitando dados do usuário
	cabecalho();
	do {
		
		printf("Digite uma nota : ");
		scanf("%f",&nota);
		fflush(stdin);
		contador = contador + 1; // ou contador++;
		continua = toupper(continua);	
		printf("Digite 'n' Se deseja escrever mais uma nota : ");
		scanf("%c",&continua);
		
		soma = soma + nota;	
			
	} while (continua == 'N');
	
	//apresentando dados ao usuário
	media = soma / contador;
	cabecalho();
	printf("Média do aluno: %.2f ", media);
	
	return 0;
//fim do algoritmo
}
