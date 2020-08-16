#include <stdio.h>
#define T 10
int main(){
    int v[T], cont = 0, i;
    printf("Digite %d valores: ", T);
    for(i = 0; i < T; i++){
        printf("\nValor %d: \n", i+1);
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0){
            cont++;
        }
    }
    printf("\nQuantidade de pares: %d\nQuantidade de Impares: %d", cont, T-cont);
    return 0;
}
