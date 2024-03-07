//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
	//inicio do programa
char* verificarParImpar(int numero) {
	char resposta[200];
	
	if (numero % 2 == 0)
		strcpy(resposta, "Par.");
	else 
		strcpy(resposta, "Impar.");	
		
	return resposta;	
}
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis
	int numero;
	char resultado[200];
		
	//solicitando dados do usuario
	printf("Digite o primeiro número: ");
	scanf("%i",&numero);
		
	//apresentando dados ao usuario
	strcpy(resultado, verificarParImpar(numero));
	printf("Número é: %s", resultado);
	
	return 0;
	//fim do programa
}
