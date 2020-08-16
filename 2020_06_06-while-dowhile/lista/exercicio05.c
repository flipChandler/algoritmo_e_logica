#include <stdio.h>

int main() {
	int numero, cont = 1, soma_numero = 0;
	
	printf("Digite um numero inteiro positivo:\n");
	scanf("%d", &numero);
	
	while(cont < numero){
		if (numero % cont == 0){
			soma_numero += cont;
		}
		cont++;		
	}
	
	if(soma_numero == numero){
		printf("Numero %d eh perfeito", numero);
		return;
	}
	
	printf("Numero %d nao eh perfeito", numero);
	
	return 0;
}
