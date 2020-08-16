//ler uma matriz 3x3, encontrar e mostrar o maior elemento
#include <stdio.h>
#define T 3

int main() {
	int matriz[T][T], i, j, maior_valor;
	
	printf("Digite os valores da matriz: ");
	maior_valor = matriz[0][0];
	for (i = 0; i < T; i++) {
		for (j = 0; j < T; j++) {
			printf ("\nPosicao [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] > maior_valor){
				maior_valor = matriz[i][j];
			}
		}
	}
	
	printf ("\nMaior valor = %d", maior_valor);
	
	return 0;
}
