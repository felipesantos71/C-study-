#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

	//incio do programa
void cabecalho() {
	system("cls || clear");
	printf("\n == ==\n");
}

int main() {
	setlocale(LC_ALL,"");
	
	//declarando vari�veis
	int idade, opcao, maiorIdade = INT_MIN, menorIdade = INT_MAX;
	int quantidadeSalarios = 0, mulheres5k = 0;
	char sexo;
	float salario, somaSalarios = 0, mediaSalarial;
	
	//usando la�o para definir dados e apresentar resultados.
	do {
	
		printf("C�digo \t Descri��o \n");
		printf("1 \t Adicionar pessoa \n");
		printf("2 \t Exibir resultados e sair \n");
		printf("Digite a op��o desejada: ");
		scanf("%i",&opcao);
		
			switch(opcao) {
				case 1:
					printf("Digite sua idade: ");
					scanf("%i",&idade);
				
					fflush(stdin);
					printf("Digite o sexo - M ou F: ");
					scanf("%c",&sexo);
	
					printf("Digite o sal�rio : ");
					scanf("%f",&salario);		
				
					sexo = toupper(sexo);
				
					if (idade > maiorIdade) {
						maiorIdade = idade;
					}
				
					if (idade < menorIdade) {
						menorIdade = idade; 
					}
				
					quantidadeSalarios++;
					somaSalarios += salario;
				
					if (sexo == 'F' && salario >= 5000) {
						mulheres5k++;
					}
				
					break;
				case 2:
					mediaSalarial = somaSalarios / quantidadeSalarios;
				
					printf("\n=== Exibindo Resultados ===\n");
					printf("M�dia Salarial do grupo: R$ %.2f\n", mediaSalarial);
					printf("Maior idade: %i \n", maiorIdade);
					printf("Menor idade: %i \n", menorIdade);
					printf("Quantidade mulheres com sal�rio acima de R$ 5000 : %i \n", mulheres5k);
					break;
				default:
					printf("Op��o inv�lida.");
			}
	}while (opcao != 2); 

	return 0;
	//fim do programa
}
