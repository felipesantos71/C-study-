#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho () {
	system("cls || clear");
	printf("\n== Números Positivos e Negativos ==\n");
}

int main () {
	setlocale(LC_ALL, "");
	//declarando variáveis
	int i, numero, quantidadeNumeros=1, pares=0, impares=0;
	int quantidadePositivos=0, quantidadeNegativos=0;
	
	//usando laco do while para definir numeros
	cabecalho();
	do {
		printf("Digite um número : ");
		scanf("%i",&numero);
		
		if (numero!=0) {
			quantidadeNumeros++;
		}
		
		if(numero>0) {
			quantidadePositivos++;
			if (numero%2==0) {
				pares++;
			} else {
				impares++;
			}		
		} else if (numero<0) {
			quantidadeNegativos++;
		}		
	} while (numero !=0);
	//exibindo resultados
	cabecalho();
	printf("Números positivos pares: %i\n", pares);
	printf("Números positivos impares: %i\n", impares);
	printf("Números positivos: %i\n",quantidadePositivos);	
	printf("Números negativos: %i\n",quantidadeNegativos);
	printf("Números inseridos: %i\n",quantidadeNumeros);
	
	//fim do programa
	return 0;
}
