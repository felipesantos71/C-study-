//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n == Conversor M para CM ==\n");
}
float inflacionar(float preco) {
	float novoPreco;
	if (preco<100) {
		novoPreco = preco*1.1;
	} else {
		novoPreco = preco*1.2;
	}		
	return novoPreco;
}
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis
	float preco, resultado;
		
	//solicitando dados do usuario
	cabecalho();
	printf("Digite um valor: ");
	scanf("%f",&preco);
	
	resultado = inflacionar(preco);
	//apresentando dados ao usuario
	printf("\nValor total é: %.2f", resultado);
	
	return 0;
	//fim do programa
}
