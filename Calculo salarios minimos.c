#include <stdio.h>
#include <stdlib.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n===Calculos Salariais===\n");
}	
	
int main () {
	//declarando variaveis
	float salario, quantSalarios;
	int baseSalarial = 1412;
	//solicitando dados do usuario
	cabecalho();
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	
	//calculando salario do usuario
	quantSalarios = salario/baseSalarial;
	
	//apresentando dados ao usuario
	cabecalho();
	printf("Quantidade salarios minimos: %2.f", quantSalarios);
	
	return 0;
	//fim do programa
}
