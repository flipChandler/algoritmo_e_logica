#include<stdio.h>

int main() {
	int valor;
	printf ("Digite qualquer valor inteiro:\n");
	scanf ("%d", &valor);
	
	if(valor >= 100 && valor <= 200) {
		printf("O valor %d estah entre 100 e 200", valor);	
		return;//DESCOBRI RECENTEMENTE ESSE RETURN COMO ALTERNATIVA AO ELSE, PROFESSORA. AÍ TOMEI A LIBERDADE... ESPERO QUE A SENHORA NÃO SE CHATEIE!!
	}
	printf("O valor %d nao estah entre 100 e 200", valor);
	
	return 0;
}
