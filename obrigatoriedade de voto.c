#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Apto ou n�o a votar==\n");
}
int main () {
	setlocale(LC_ALL, "");
	
	//Declarando variaveis
	cabecalho();
	int idade;
	
	//solicitando dados do usuario
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	//apresentando dados e estrutura condicional
	if (idade>=18 && idade<=65) {
		printf("Voc� � obrigado a votar!");
	}	else {
		printf("Voc� n�o � obrigado a votar.");
	}
	
	return 0;
	//fim do programa
}
	
