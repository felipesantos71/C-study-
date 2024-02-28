#include <stdio.h>
#include <stdlib.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n=== Sucessor e antecessor ===\n");
}	
	
int main () {
	//declarando variavel
	int numero, antecessor, sucessor;
	
	//solicitando dados do usuário
	cabecalho();
	printf("Digite seu numero: ");
	scanf("%i",&numero);
	
	//calculando numeros
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	//apresentando dados ao usuario
	cabecalho();
	printf("Numero escolhido: %i \n", numero);
	printf("Antecessor do Numero: %i \n", antecessor);
	printf("Sucessor do Numero: %i \n", sucessor);
	
	return 0;
	//fim do programa
}	
