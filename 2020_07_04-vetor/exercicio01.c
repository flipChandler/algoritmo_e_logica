#include <stdio.h>

int main(){
	int vetor[10], numero, maior_par, i;
	
	printf("digite 10 valores inteiros:\n");
	
	for(i = 0; i < 10; i++) {		
		scanf("%d", &numero);		
		if(numero % 2 == 0 ){
			vetor[i] = numero;
		}		
	}
	
	maior_par = vetor[0];
	
	for(i = 1; i <= 10; i++) {
		if(vetor[i] > maior_par){
			maior_par = vetor[i];
		}
	}
	
	printf("Maior par = %d", maior_par);	
	
	return 0;
}
