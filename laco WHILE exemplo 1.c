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
	float nota;
	
	printf("Digite uma nota: ");
	scanf("%f",&nota);
		
	//laço while determinado nota
	cabecalho();
	while(nota < 0 || nota > 10) {
		printf("Digite uma nota: ");
		scanf("%f",&nota);
	}	
	
	//apresentando dados ao usuário
	printf("Nota informada: %.1f \n", nota);
	
	return 0;
//fim do algoritmo
}

