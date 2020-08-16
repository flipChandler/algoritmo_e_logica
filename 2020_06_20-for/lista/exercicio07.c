#include <stdio.h>

int main() {
	
	int n, i;
	
	do{
		printf("Digite um numero inteiro:\n");
		scanf("%d", &n);
	}while(n <= 0);	
	
	printf("\n1");
	
	for (i = 3; i <= n; i+=2){
		printf(" %d", i);
	}
		
	return 0;
}
