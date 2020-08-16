#include <stdio.h>

int main() {
	int numero, numero_invertido, centena, dezena, unidade, aux;
	
	printf ("Digite um numero inteiro de 3 digitos:\n");
	scanf ("%d", &numero); 
	
	aux = numero;
			
	unidade = aux % 10;    
	aux -= unidade;	
	
	dezena = aux % 100; 
	aux -= dezena;
	
	centena = aux;	
	
	numero_invertido = centena / 100 + dezena + unidade * 100;
	
	printf("Numero digitado: : %d\n", numero);	
	printf("Numero invertido: : %d\n", numero_invertido);	
	
	return 0;
}
