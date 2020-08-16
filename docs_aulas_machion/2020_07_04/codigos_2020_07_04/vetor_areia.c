// ler um vetor com 10 valores inteiros
// encontrar o maior valor par desse vetor
#include <stdio.h>
#define TAMANHO 5
int main () {
	int mvp, v[TAMANHO], i, j; 
	printf ("digite %d valores para o vetor:\n", TAMANHO);
	for (i=0; i < TAMANHO; i++) {
		printf ("valor %d: ", i);
		scanf ("%d", &v[i]);
	}
	//encontrar o primeiro par
	i=0;
	while (i < TAMANHO && v[i]%2 != 0) {
		i++;
	}
	printf("/nvalor de i = %d", i);
	
	//ser√° que existe algum par?
	if (i < TAMANHO) { //sim, existe
		mvp = v[i];
		printf("Valor de mvp na posiÁ„o %d = %d", i, mvp);
		for (j = i + 1; j < TAMANHO; j++) {
			if (v[j]%2 == 0 && v[j] > mvp) {
				mvp = v[j];
			}
		}
		printf ("\nMaior valor par encontrado = %d\n", mvp);
		printf ("\nj que saiu do laco = %d\n", j);
	}
	else { //n√£o, n√£o existe
		printf ("\nA lista de valores nao contem pares\n");
	}
	return 0;
}
