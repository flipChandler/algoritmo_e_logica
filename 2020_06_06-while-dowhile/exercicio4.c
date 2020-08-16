#include <stdio.h>

int main() {
	int quantidade, inteiro = 0, soma = 0, cont = 0;
	
	do{
		printf ("Digite a quantidade de numeros a ser digitada:\n");
		scanf("%d", &quantidade);
		cont = quantidade;
		
		while (cont > 0)	{
			printf("Digite um inteiro:\n");
			scanf ("%d", &inteiro);
			if(inteiro % 3 == 0){
				soma += inteiro;
			}
			cont--;
		}
			
	} while (quantidade <= 0);
	
	printf ("\nSoma dos multiplos de tres = %d", soma);	
	
	return 0;	
}
