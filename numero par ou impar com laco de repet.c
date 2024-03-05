#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//incio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Numero de par e impar ==\n");
}
int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int numero, pares = 0, impares = 0, i;
	
	//solicitando dados do usuario e laco de repeticao
	cabecalho();
	for (i=1;i<=5;i++){
		printf("Digite o %iº numero: ", i);
		scanf("%i",&numero);
		
		if (numero % 2 == 0) {
			pares++;
		} else {
			impares++;
		}
		fflush(stdin);
	}
	
	//apresentando dados ao usuario
	cabecalho();
	printf("Números pares: %i\n", pares);
	printf("Números impares: %i\n", impares);

	return 0;
	//fim do programa
}
