//ler um vetor com 10 elementos
//mostrar quantos são pares e quantos são ímpares
#include <stdio.h>
#define T 10
int main () {
	int v[T], i, conta_par=0; 
	printf ("digite %d valores para o vetor:\n", T);
	for (i=0; i<T; i++) {
		printf ("valor %d: ", i);
		scanf ("%d", &v[i]);
	}
	for (i=0; i<T; i++) {
		if (v[i] % 2 == 0) {
			conta_par++;
		}
	}
	printf ("\npares: %d\nimpares: %d\n", conta_par, T-conta_par);
	return 0;
}