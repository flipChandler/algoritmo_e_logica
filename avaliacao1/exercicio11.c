#include <stdio.h>

int main() {
	int valor1, valor2, valor3, valor4, aux;
	
	printf ("Digite 3 valores em ordem crescente:\n");
	scanf ("%d%d%d", &valor1, &valor2, &valor3);
	
	printf ("Digite mais um valor:\n");
	scanf ("%d", &valor4);
	
	if( valor4 < valor1 ){
		aux = valor4;
		valor4 = valor3;
		valor3 = valor2;
		valor2 = valor1;
		valor1 = aux; 
	}else if( valor4 < valor2 ){
		aux = valor4;	
		valor4 = valor3;
		valor3 = valor2;
		valor2 = aux;		
	}else if( valor4 < valor3 ){ 
		aux = valor4;
		valor4 = valor3;
		valor3 = aux;	
	}
		
	printf("Ordem crescente: %d, %d, %d e %d", valor1, valor2, valor3, valor4);	
	
	return 0;
}
