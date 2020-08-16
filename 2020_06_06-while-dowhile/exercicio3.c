#include <stdio.h>

int main() {
	int cont = 1,numero, cont_par = 0;
	
	do{
		printf ("Digite um numero:\n");	
		scanf ("%d", &numero);
		if (!(numero % 2)){
			cont_par++;
		}
		cont++;
	} while (cont <= 10);
	
	printf ("\nQuantidade de pares digitados: %d", cont_par);
	
	
	return 0;	
}
