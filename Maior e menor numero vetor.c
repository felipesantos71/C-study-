#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

	//inicio do código
int main () {
	setlocale(LC_ALL, "");
	//declarando variaveis e vetores
	int numero[5], maiorNumero = INT_MIN, menorNumero = INT_MAX;
	int i;
	
	//laço for com vetor
	printf("Digite um número: \n");
	for(i=0;i<5;i++){
			printf("Número %i: ", i+1);
			scanf("%i",&numero[i]);
	}
	
	printf("Resultado:\n");
	for(i=0;i<5;i++){
		printf("Seus números %i: %i\n", i+1, numero[i]);
		
		if(numero[i]>maiorNumero) {
			maiorNumero = numero[i];
		}	
		if(numero[i]<menorNumero) {
			menorNumero = numero[i];
		}
		
	}
	printf("Maior número: %i\n", maiorNumero);
	printf("Menor número: %i", menorNumero);	
	
	return 0; 
	//fim do programa
}
