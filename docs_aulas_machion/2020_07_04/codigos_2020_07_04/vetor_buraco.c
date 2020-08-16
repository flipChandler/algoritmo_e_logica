// ler um vetor com 10 valores inteiros
// encontrar o maior valor par desse vetor
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
    
    for(i = 0; i < 10; i++) {
        printf ("%d ", vetor[i]);
    }
    
    return 0;
}