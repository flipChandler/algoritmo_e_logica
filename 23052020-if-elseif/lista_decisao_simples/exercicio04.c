#include <stdio.h>

int main() {
	int valor;
	printf ("Digite qualquer valor inteiro:\n");
	scanf ("%d", &valor);
	if (valor >= 0){
		printf ("O valor %d eh positivo!", valor);
		return; // DESCOBRI RECENTEMENTE ESSE RETURN COMO ALTERNATIVA AO ELSE, PROFESSORA. A� TOMEI A LIBERDADE... ESPERO QUE A SENHORA N�O SE CHATEIE
	}
	printf ("O valor %d eh negativo!", valor);
	
	return 0;
}
