#include <stdio.h> 

int main() {
	int numero, i;	
	
	do{
		printf("Digite um numero inteiro:\n");
		scanf("%d", &numero);			
	}while(numero <= 0);
	
	for (i = 0; i <= numero;){
		i++;
		if (numero % i == 0) {// se i = 0, numero % i dá erro e não
			printf("%d ", i);
		}
	}	
	
	return 0;
}
