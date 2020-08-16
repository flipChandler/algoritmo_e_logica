#include<stdio.h>
#define TAMANHO 10
int main() {
	int A[TAMANHO], B[TAMANHO], C[TAMANHO], i;
	
	printf("Digite os valores do vetor A:\n");
	for (i = 0; i < TAMANHO; i++) {
		printf("Posicao %d: ", i);
		scanf("%d", &A[i]);
	}
	
	printf("\nDigite os valores do vetor B:\n");
	for (i = 0; i < TAMANHO; i++) {
		printf("Posicao %d: ", i);
		scanf("%d", &B[i]);
	}
	
	for(i = 0; i < TAMANHO; i++) {
		C[i] = A[i] - B[i];
	}
	
	printf("\nValores do vetor C: ");
	for(i = 0; i < TAMANHO; i++) {
		printf("\nPosicao %d: %d ", i, C[i]);
	}	
	
	return 0;
}
