//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n == Conversor M para CM ==\n");
}
float metroDivisor(float valor) {
	float metro;
	metro = (valor * 100);
	return metro;
}
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis
	float valor, centimetro;	
	//solicitando dados do usuario
	cabecalho();
	printf("Digite o numero que deseja converter: ");
	scanf("%f",&valor);
	//apresentando dados ao usuario
	printf("\nNúmero em centimetros é: %.1f", centimetro=metroDivisor(valor));
	
	return 0;
	//fim do programa
}
