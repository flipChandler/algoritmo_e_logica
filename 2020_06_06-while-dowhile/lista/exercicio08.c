#include <stdio.h>

int main() {
	int n, cont;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	cont = 1;
	while(cont < n){		
		printf("%d + ", cont);
		cont++;
	}	
	printf("%d\n", cont);	
	
	cont = 1;
	while(cont < n){		
		printf ("%d - %d + ", cont, cont+1);
		cont += 2;
	}
	printf("%d\n", cont);	
	
	cont = 1;
	while(cont < n+2){
		printf("%d + ", cont);
		cont+=2;
	}
	printf("%d", cont);	
	
	return 0;
}
