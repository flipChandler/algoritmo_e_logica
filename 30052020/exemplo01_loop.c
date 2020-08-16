#include <stdio.h>

int main() {
	int cont = 0, soma = 0;
	
	while(cont < 100){
		printf("%d\n", cont);
		soma = soma + cont;
		cont = cont + 2;
	}
	printf("%d", soma);
	
	return 0;
}
