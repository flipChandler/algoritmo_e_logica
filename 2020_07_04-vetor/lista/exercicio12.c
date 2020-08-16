#include<stdio.h>
#define TAMANHO 10
int main() {
	int v[TAMANHO], v1[TAMANHO], v2[TAMANHO], i, conta_par = 0, conta_impar = 0;
	
	printf("Digite os valores do vetor v:\n");
	for (i = 0; i < TAMANHO; i++) {
		printf("Posicao %d: ", i);
		scanf("%d", &v[i]);
	}
			
	for(i = 0; i < TAMANHO; i++) {
		if(v[i] % 2 != 0) {
			v1[conta_impar] = v[i];
			conta_impar++;
		}else{
			v2[conta_par] = v[i];
			conta_par++;
		}		
	}
	
	printf("\nValores de v1: ");
	for(i = 0; i < conta_impar; i++) {
		printf("\nPosicao %d: %d ", i, v1[i]);
	}	
	
	printf("\n\nValores de v2: ");
	for(i = 0; i < conta_par; i++) {
		printf("\nPosicao %d: %d ", i, v2[i]);
	}	
	
	return 0;
}
