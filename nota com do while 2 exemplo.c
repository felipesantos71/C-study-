#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
int main() {
	setlocale(LC_ALL, "");
	//declarando variaveis
	float nota;
	
	do {
	//comandos a serem repetidos.
		
		printf("Digite um n�mero: ");
		scanf("%f",&nota);
		fflush(stdin);
			
	} while (nota > 10 || nota <0);
	
	//exibindo quantidade de vezes que o la�o de repeti��o aconteceu.
	printf("Nota informada: %.2f ", nota);
	
	return 0;
}
