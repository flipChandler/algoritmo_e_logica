#include <stdio.h>

int main() {
	int numero, cont, divisor;
	
	printf("Digite um numero positivo:\n");
	scanf("%d", &numero);
	
	cont = 1;
	printf("Divisor(es) = ");
	while(cont <= numero){
		if(numero % cont == 0){
			printf("%d ", cont);
		}
		cont++;
	}
	
	return 0;	
	
}
