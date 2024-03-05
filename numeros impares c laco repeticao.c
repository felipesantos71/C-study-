#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	//inicio do programa
void cabecalho () {
	system("cls || clear");
	printf("\n == Números ímpares == \n");
}
int main ()  {
	setlocale(LC_ALL, "");
	//declarando variavel
	int i;
	cabecalho();
	//laco de repeticao
	for (i = 1; i <= 20; i++) {
		if(i % 2 == 1) {
			printf("%i \n",i);
		}
	}
	
	return 0;
	//fim do programa
}

