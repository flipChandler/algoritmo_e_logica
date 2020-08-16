#include <stdio.h>

int main() {
	int numero;
	
	do{
		printf ("\nDigite um valor entre 100 e 200\n");	
		scanf ("%d", &numero);
	} while(numero < 100 || numero > 200);
	
	printf ("\nobrigado, volte sempre");
	
	
	return 0;	
}
