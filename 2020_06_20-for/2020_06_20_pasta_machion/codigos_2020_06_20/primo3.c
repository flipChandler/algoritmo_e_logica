//sabemos que um número é primo quando tem somente os divisores
//1 e ele mesmo.
//ler um número inteiro e positivo e dizer se ele é primo ou não

#include <stdio.h>
#include <math.h>
int main(){
    int num, i, raiz, e_primo;
    do{
        printf("Digite um inteiro positivo: ");
        scanf("%d", &num);
    }while(num <= 0);

    raiz = (int)sqrt(num);
    for(i=2, e_primo=1; i<=raiz && e_primo==1; i++){
        if(num % i == 0){
           e_primo=0;
        }
    }
    if (e_primo==1) {
        printf ("\n%d e primo\n", num);
    }
    else {
        printf ("\n%d nao e primo\n", num);
    }

    return 0;
}
