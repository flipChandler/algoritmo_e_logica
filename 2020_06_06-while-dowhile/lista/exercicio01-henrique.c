#include <stdio.h>

int main() {

	int n, aux;

	printf("Informe um numero: ");

	scanf("%d", &n);

	while ((n < 100) || (n > 999)) {

		printf("Erro. Precisa estar entre 100 e 999. Reinforme o numero: ");

		scanf("%d", &n);

	}

	aux = n;

	while (aux > 0) {

		printf("\t%d", aux%10);

		aux /= 10;

	}

	printf("\n");

	return 0;

}
