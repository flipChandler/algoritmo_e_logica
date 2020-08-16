#include <stdio.h>

int main() {
	float numero, inverso;
	printf ("Leia um numero real e mostre o seu inverso\n");
	printf ("Digite um numero real:\n");
	scanf ("%f", &numero);
	
	if (numero == 0) {
		printf ("Erro!");
	}else{
		inverso = 1 / numero;
		printf ("O numero inverso de %.2f eh %.6f ", numero, inverso);
	}	
	return 0;
}
