#include <stdio.h>
#include <stdlib.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n=== calculo porcentagem ===\n");
}

int main () {
	//declarando variaveis
	float numero, porcentagem, valorMaior, valorMenor;
	
	//solicitando dados do usuario
	cabecalho();
	printf("Digite um numero: ");
	scanf("%f",&numero);
	
	//calculando resultado
	porcentagem = numero * 0.1;
	valorMaior = porcentagem + numero;
	valorMenor = numero - porcentagem;
	
	//apresetando resultados
	cabecalho();
	printf("Numero escolhido: %2.f \n", numero);
	printf("Acrescimo 10%: %2.f \n", valorMaior);
	printf("Descrescimo 10%: %2.f \n", valorMenor);
	
	return 0;
}	
