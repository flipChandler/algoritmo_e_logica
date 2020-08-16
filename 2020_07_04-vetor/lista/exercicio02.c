#include<stdio.h>
#define TAMANHO 8
int main() {
	int vetor[TAMANHO], i, x, y, valor_x, valor_y, soma = 0;
	
	for (i = 0; i < TAMANHO; i++) {
		printf("Valor %d ", i);
		scanf("%d", &vetor[i]);
	}
	
	do{
		printf("\nDigite um valor entre 0 a 7 para x: ");
		scanf("%d", &x);
	}while(x < 0 || x > 7);
	
	do{
		printf("\nDigite um valor entre 0 a 7 para y: ");
		scanf("%d", &y);
		if (y == x){ // y tem que ser diferente de x
			y = -1;
		}
		
	}while(y < 0 || y > 7);
	
	for (i = 0; i < TAMANHO; i++) {
		if (i == x){
			valor_x = vetor[i];		
		}else if(i == y){
			valor_y = vetor[i];
		}		
	}
	
	soma = valor_x + valor_y;
	
	printf("Soma entre %d e %d = %d", valor_x, valor_y, soma);
	
	return 0;
}
