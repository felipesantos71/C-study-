#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//incio do programa
void cabecalho() {
	system("cls || clear");
	printf("\n == Vetores com la�o for Exemplo 1 ==\n");
}

int main() {
	setlocale(LC_ALL,"");
	
	//declarando vetor
		
	int vetor[5];
	int i;	
	
	//solicitando dados do usu�rio com la�o for.
	cabecalho();
	printf("Digite os elementos do vetor:\n");
	
	for (i=0;i<5;i++) {
		printf("Elemento %d: ", i+1);
		scanf("%d",&vetor[i]);
	}
		
	//apresentando dados ao usu�rio com la�o.
	cabecalho();
	for (i=0;i<5;i++) {
		printf("Elemento %d: %d\n", i+1, vetor[i]);
	}
			
	return 0;
	//fim do programa
}
