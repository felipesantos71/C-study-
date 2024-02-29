#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n=== Formulário de Login ===\n");	
}
int main() {
	setlocale(LC_ALL, "");
	//declarando variáveis
	char login[20], senha[20];
	char loginCadastrado[20] = "felipe26", senhaCadastrada[20] = "123456";
	
	//solicitando senha invalidos
	cabecalho();
	printf("Digite seu login: ");
	scanf("%s",&login);
	printf("Digite sua senha: ");
	scanf("%s",&senha);
		
	//apresetando dados
	if (strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0) {
		printf("Bem-vindo!\n");
	}	else {
		printf("Usuário ou senha inválidos!\n");
	}
	return 0;
	//fim do programa
}
	
