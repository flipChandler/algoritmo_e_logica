#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int main() {
	int vetor[5];
	int i, a, b, temp;
	
	for ( i = 0; i < TAMANHO; i++ ) {
		printf("Digite um numero:\n");
		scanf( "%i", &vetor[i] );
	}
	
	for ( a = 0; a < TAMANHO; a++ ) {
		for ( b = a + 1; b < TAMANHO; b++ ) {
			if ( vetor[a] > vetor[b] ) {
				temp = vetor[a];
				vetor[a] = vetor[b];
				vetor[b] = temp;
			}
		}
	}
	
	for ( i = 0; i < TAMANHO; i++ ) {
		printf("%i ", vetor[i] );
	}
}
