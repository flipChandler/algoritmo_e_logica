#include <stdio.h>

int main() {
	int numero, fatorial = 1, cont;
	
	do{
		printf("Digite um numero inteiro positivo:\n");
		scanf("%d", &numero);	
	}while(numero < 0);
		
	
	cont = numero;
	while(cont >= 1){
		fatorial *= cont;
		cont--;
	}
	
	printf("O fatorial de %d = %d", numero, fatorial);
	return 0;
}
