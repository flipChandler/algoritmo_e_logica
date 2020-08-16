#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[10];
	
	printf("Digite o seu nome: \n");
	gets(nome);
	
	printf("O seu nome é %s ", nome);
	
	return 0;
}
