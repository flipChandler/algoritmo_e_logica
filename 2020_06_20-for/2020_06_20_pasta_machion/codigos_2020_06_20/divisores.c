#include <stdio.h>
int main(){
    int num, i, metade;
    do{
        printf("Digite um inteiro positivo: ");
        scanf("%d", &num);
    }while(num <= 0);
    metade = num/2;
    printf ("\nDivisores de %d:\n1 ", num);
    for(i = 2; i <= metade; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
    printf ("%d\n", num);
    return 0;
}
