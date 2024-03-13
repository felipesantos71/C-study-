#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//inicio do algoritmo
void cabecalho() {
	system("cls || clear");
	printf("\n == Média somente com While ==\n");
}
char* verificarAprovacao(float media){
	char resposta[100];
	
	if (media >= 7) 
		strcpy(resposta, "Aprovado!");
		else if	(media >=5)
		strcpy(resposta, "Recuperação!");
		else
		strcpy(resposta, "Reprovado!");
	return resposta;	
}
int main() {
	setlocale(LC_ALL, "");
	
	//declarando variáveis
	float nota, media, soma = 0;
	int i;
	char resultado[100];
	
	//laço while determinado nota
	cabecalho();
	for (i=1;i<=3;i++) {
		
		printf("Digite a %iª nota: ", i);
		scanf("%f",&nota);
				
		while(nota < 0 || nota > 10) {
			printf("Digite uma nota: ");
			scanf("%f",&nota);
		
		}
		soma+=nota;	
	}
	//apresentando dados ao usuário
	media = soma / 3;
	printf("Média do aluno: %.2f\n", media);
	strcpy(resultado, verificarAprovacao(media));
	printf("Aluno: %s", resultado);
	
	return 0;
//fim do algoritmo
}

