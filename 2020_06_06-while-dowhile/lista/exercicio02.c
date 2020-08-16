#include <stdio.h>

int main() {
	int cont = 0, cont_par = 0, numero;
	
	do{
		printf ("Digite um numero inteiro:\n");
		scanf ("%d", &numero);
		//cont++;
		if (numero == 1000) {
			printf("\nProcesso finalizado!");
		}		
		else if(numero % 2 == 0){
			printf("%d eh par!\n\n", numero);
			cont_par++;
		}else{
			printf("%d eh impar!\n\n", numero);
		}
		cont++;	
	} while (numero != 1000);
	
	printf ("\nQuantidade de numeros pares digitados = %d", cont_par);
	printf ("\nQuantidade total de numeros digitados = %d", cont - 1);
	
	return 0;
}
