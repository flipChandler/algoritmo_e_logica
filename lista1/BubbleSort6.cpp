#include<stdio.h>
#define tamanho 4

int main(){
	int vetor[4];
	
	int cont, a, b, temp;
	
	for(cont = 0; cont < tamanho; cont++){
		printf("Digite um numero:");
		scanf("%i[%i]",& vetor[cont]);
	}
	
	for( a = 0; a < tamanho; a++){
		for(b = a + 1; b < tamanho; b++){
			if(vetor [a] > vetor [b]){
				temp = vetor [a];
				vetor [a] = vetor [b];
				vetor [b] = temp;
			}
		}
	}
	
	for(cont = 0; cont < tamanho; cont++){
		printf("%i ",vetor[cont]);
	}
}
