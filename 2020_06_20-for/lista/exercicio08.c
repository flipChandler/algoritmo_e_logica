#include <stdio.h>

int main() {
	
	int soma_par, i, cont = 1; // cont = 1, já conta o 0, 
	
	for(i = 2; i <= 98; i+=2){
		soma_par += i;
		cont++;
	}
	
	printf("Soma dos 50 primeiros numeros pares = %d\nContagem de numeros = %d", soma_par, cont);
	
	return 0;
}
