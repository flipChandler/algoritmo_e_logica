#include <stdio.h>
#define T 10

int main(){
	int vetor[10], i, cont_par = 0, cont_impar;
	
	printf("digite 10 valores inteiros:\n");
	
	for(i = 0; i < T; i++) {		
		scanf("%d", &vetor[i]);		
		if(vetor[i] % 2 == 0 ){
			cont_par++;
		}else{
			cont_impar++;
		}		
	}	
	
	printf("Total de pares = %d\nTotal de impares = %d", cont_par, cont_impar);	
	
	return 0;
}
