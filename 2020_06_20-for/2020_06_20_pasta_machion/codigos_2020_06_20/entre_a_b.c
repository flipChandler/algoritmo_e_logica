// pedir para o usuário 2 valores a e b, exibir os valores no intervalo [a, b]
// de maneira crescente
#include <stdio.h>
int main(){
    int a, b;
    printf("Digite os valores A e B: \n");
    scanf("%d%d", &a, &b);
    if(a < b){
        for( ;a <= b; a++){
            printf("%d\n", a);
        }
    }
    else{
        for( ;b <= a; b++){
            printf("%d\n", b);
        }
    }
    return 0;
}
    int a, b, i;
    if (a < b) {
        for( i = a; i <= b; i++){
            printf("%d ", i);
        }
    }else{
        for( i = b; i <= a; i++){
            printf("%d ", i);
        }
    }
