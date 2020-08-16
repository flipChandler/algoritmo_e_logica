#include <stdio.h>

int main() {
	int num, c, d, u, novonum;
	printf("Digite um numero de 3 digitos: ");
	scanf("%d", &num);
	c = num / 100;
	num = num % 100;
	d = num / 10;
	u = num % 10;	
	novonum = (u * 100) + d * 10 + c;
	printf("Numero invertido %d", novonum);
	
	return 0;
}
