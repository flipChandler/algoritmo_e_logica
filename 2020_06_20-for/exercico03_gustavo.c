#include <stdio.h>

 

int main(){
    int num, i;
    do{
        printf("Digite um inteiro positivo: ");
        scanf("%d", &num);
    }while(num <= 0);
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            printf("\n%d", i);
        }
    }
    return 0;
}
