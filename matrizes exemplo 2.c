#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicio do programa
void cabecalho(){
	system("cls || clear");
	printf("\n==Matrizes Exemplo 2==\n");
}
int main() {
	//declarando variaveis(matrizes)
	int numeros[2][2]; 
	int i,j;
	//usando laço for para pedir dados do usuário com matrizes.
	cabecalho();
	fflush(stdin);
	printf("Digite os elementos para matriz:\n");
	for (i=0;i<2;i++) {
		for (j=0;j<2;j++) {
			printf("Elemento da linha %d coluna %d: \n",i+1,j+1);
			scanf("%d",&numeros[i][j]);
		}
	}
	//exibindo matrizes
	cabecalho();
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("Elemento da linha %i coluna %d: %d \n",i+1,j+1,numeros[i][j]);
		}	
	}	
	return 0;
	//fim do programa	
}
