#include <stdio.h>
#define T 3
int main() {
	int matriz[T][T], vetor_diagonal[T], i, j;
	
	printf ("Digite o valores da matriz [%d]x[%d]:\n",T,T);
	for (i = 0; i < T; i++) {
		for (j = 0; j < T; j++) {
			printf ("Posicao [%d][%d] = ", i, j);
			scanf ("%d", &matriz[i][j]);
		}
	}
	
	vetor_diagonal[0] = matriz[0][0];
	for (i = 1; i <= T; i++) {
		vetor_diagonal[i] = matriz[i][i];
	}
	
	printf ("\nDiagonal Principal da Matriz = ");
	for (i = 0; i < T; i++) {
		printf ("[%d]", vetor_diagonal[i]);
	}	
	
	printf ("\n\nMuito obrigado, professora!!!! :*");
	
	return 0;
}
