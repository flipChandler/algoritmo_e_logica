//sabemos que um número é primo quando tem somente os divisores
//1 e ele mesmo.
//ler um número inteiro e positivo e dizer se ele é primo ou não

#include <stdio.h>
int main(){
    int num, i, metade, cont;
    do{
        printf("Digite um inteiro positivo: ");
        scanf("%d", &num);
    }while(num <= 0);

    metade = num/2;

    for(i=2, cont=0; i <= metade; i++){
        if(num % i == 0){
           cont++;
        }
    }
    if (cont==0) {
        printf ("\n%d e primo\n", num);
    }
    else {
        printf ("\n%d nao e primo\n", num);
    }

    return 0;
}
