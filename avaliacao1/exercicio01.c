#include <stdio.h>

int main() {
	int numero;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	numero++;
	printf("O seu sucessor eh %d e seu antecessor eh %d", numero, numero-2);
	
	return 0;
}
