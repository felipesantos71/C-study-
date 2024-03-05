#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//incio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Soma de Notas ==\n");
}
int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int nota, soma, i;
	
	//solicitando dados do usuario
	cabecalho();
	for (i==1;i<=5;i++){
		printf("Digite a %iª nota: ", i);
		scanf("%i",&nota);
		
		soma = soma + nota;
	}
	
	fflush(stdin);	
	
	//apresentando dados ao usuario
	cabecalho();
	printf("\nSoma das notas: %i \n", soma);
	

	return 0;
	//fim do programa
}
