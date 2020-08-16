#include <stdio.h>

int main() {
	int cont, fatorial = 1;	
	
	do {
		printf ("Digite um numero entre 0 e 12:\n");
		scanf("%d", &cont);					
		
	}while (cont < 0 || cont > 12);
	
	while(cont >= 1){
				fatorial *= cont;
				cont--;			 
	}
		
	
	printf("Fatorial = %d", fatorial);		
	
	return 0;	
	}


