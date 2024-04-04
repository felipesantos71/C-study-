#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicio do programa
void cabecalho(){
	system("cls || clear");
	printf("\n==Matrizes Exemplo 1==\n");
}
int main() {

	//declarando variaveis(matrizes)
	//int numeros[2][2]={{1,2},{2,4}}; primeira maneira de apresentar matrizes.
	int numeros[2][2];
		numeros[0][0]=1;
		numeros[0][1]=2;
		numeros[1][0]=3;
		numeros[1][1]=4;
	//exibindo matrizes
	cabecalho();
		printf("Elemento 1: %i\n", numeros[0][0]);
		printf("Elemento 2: %i\n", numeros[0][1]);
		printf("Elemento 3: %i\n", numeros[1][0]);
		printf("Elemento 4: %i\n", numeros[1][1]);
	return 0;
	//fim do programa	
}
