#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

	//incio do programa
void cabecalho() {
	system("cls || clear");
	printf("\n == Vetores com laço for Exemplo 3 ==\n");
}

int main() {
	setlocale(LC_ALL,"");
	
	//declarando vetor(array)
		
	int numeroVetor[5], menorNumero = INT_MIN, maiorNumero = INT_MAX;
	int i;	
	
	//solicitando dados do usuário com laço for e vetor(array).
	
	cabecalho();
	
	for (i=0;i<5;i++) {
		do {
			printf("Número %d: %d\n", i+1, numeroVetor[i]);
			scanf("%i",&numeroVetor[i]);
		}while (numeroVetor[i] < 0 || numeroVetor[i] > 10);
			
		if (numeroVetor[i] > maiorNumero) {
			maiorNumero = numeroVetor;
		}
		if (numeroVetor[i] < menorNumero) {
			menorNumero = numeroVetor;
		}
	}
	
	cabecalho();
	for (i=0;i<5;i++) {
		printf("%iº numero: %i \n", i+1, numero[i]);
	}
	
	//informando maior e menor numero com if else.
	
	printf("Maior número: %i", maiorNumero);
	printf("Menor número: %i", menorNumero);
	}
	
	return 0;
	//fim do programa
}
