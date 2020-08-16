//ler uma matriz 3x3, encontrar o maior elemento de cada linha,
//armazenando-os num vetor e depois exibir esse vetor
#include <stdio.h>
#define T 3

int main() {
	int matriz[T][T], i, j, maior_valor_linha[T];
	
	printf("Digite os valores da matriz: ");
	
	for (i = 0; i < T; i++) {
		for (j = 0; j < T; j++) {
			printf ("\nPosicao [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}
	}
	
	for (i = 0; i < T; i++) {
		maior_valor_linha[i] = matriz[i][0];
		for (j = 1; j < T; j++) {
			if(matriz[i][j] > maior_valor_linha[i]) {
				maior_valor_linha[i] = matriz[i][j];
			}						
		}
	}
	
	for (i = 0; i < T; i++) {
		printf ("\nMaior valor da linha %d = %d", i, maior_valor_linha[i]);
	}
	
	
	return 0;
}
