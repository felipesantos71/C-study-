#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicio do algoritmo
void cabecalho() {
	system("cls || clear");
	printf("\n ==  ==\n");
}
int main() {
	setlocale(LC_ALL, "");
	
	//declarando variáveis
	float nota, media, soma = 0;
	int i;
	
	
	//laço while determinado nota
	cabecalho();
	for (i=1;i<=2;i++) {
		
		printf("Digite a %iª nota: ", i);
		scanf("%f",&nota);
				
		while(nota < 0 || nota > 10) {
			printf("Digite uma nota: ");
			scanf("%f",&nota);
		
		}
		soma+=nota;	
	}
	//apresentando dados ao usuário
	media = soma / 2;
	printf("Média do aluno: %.2f", media);
	
	
	return 0;
//fim do algoritmo
}

