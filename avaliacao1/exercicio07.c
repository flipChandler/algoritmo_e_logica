#include <stdio.h>

int main() {
	int numero;
	printf ("Digite um numero inteiro:\n");
	scanf ("%d", &numero);
	
	if(numero % 7 == 0){
		printf ("O numero %d eh multiplo de 7", numero);
	}else{
		printf ("O numero %d nao eh multiplo de 7", numero);
	}
	
	return 0;
}
