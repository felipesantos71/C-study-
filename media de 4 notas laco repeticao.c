#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//incio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n== Media de 4 notas ==\n");
}
int main () {
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int i;
	float nota, soma, media;
	//solicitando dados do usuario
	cabecalho();
	for (i=1;i<=4;i++){
		printf("Digite a %iª nota: ", i);
		scanf("%f",&nota);
		
		soma = soma + nota;  // calculo tambem poderia ser assim, soma += nota;
	}
	
	media = soma / 4;
	
	//apresentando dados ao usuario
	cabecalho();
	printf("\nMedia: %.1f \n", media);    
	

	return 0;
	//fim do programa
}
