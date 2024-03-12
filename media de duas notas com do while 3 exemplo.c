#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
int main() {
	setlocale(LC_ALL, "");
	//declarando variaveis
	float nota, media, soma;
	int i;
	
	
	for (i=1; i<=2;i++){
		do {
			printf("Digite a %iª Nota: ", i);
			scanf("%f",&nota);
					
		} while (nota >10 || nota <0);
		
		soma = soma + nota;
	}
			
	
	//exibindo quantidade de vezes que o laço de repetição aconteceu.
	media = soma/2;
	printf("Média aritmética: %.2f", media);
	
	return 0;
}
