#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n==Tabuada==\n");
}
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis
	float numero;
	
	//solicitando dados
	cabecalho();
	printf("Digite um numero: ");
	scanf("%f",&numero);
	
	//laco de repeticao mais tabuado, apresentando resultados
	cabecalho();
	int i;
	
	for (i = 1; i <= 10; i++) {
		printf("%.1f / %.1d = %.1f \n", numero, i, numero/i);
	}
	
	return 0;
	//fim do programa
}


