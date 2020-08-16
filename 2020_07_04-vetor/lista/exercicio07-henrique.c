#include <stdio.h>

int main (){

    int vet[10], x, i, cont_mult;
    for(i = 0 ; i < 10; i++){
        printf("Digite o valor: %d \n", i);
        scanf("%d", &vet[i]);
    }
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    cont_mult = 0;
    for(i = 0; i < 10; i++) {
        if(vet[i] % x == 0){
             printf("numero %d \n", vet[i]);
             cont_mult++;
        }
    }
    printf("%d", vet[0]);
    printf("%d", vet[1]);
    
    printf("\n Tem %d numeros multiplos de x", cont_mult);
    return 0;
}
