#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n==Numeros pares entre 100 e 200.==\n");
}
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis
	float numero;
	
	//laco de repeticao mais tabuado, apresentando resultados
	cabecalho();
	int i;
	
	for (i = 100; i <= 120; i++) {
		if (i % 2 == 0) {
			printf("%d \n", i);
		}
		
	}
	
	return 0;
	//fim do programa
}


