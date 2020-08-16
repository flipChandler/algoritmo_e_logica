//Ler um número real com casas depois da vírgula. Exibir sua parte
//inteira e sua parte decimal separadas
#include <stdio.h>
int main() {
    int parte_inteira;
    float numero, parte_decimal;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    parte_inteira = (int)numero;
    parte_decimal = numero - parte_inteira;
    printf ("\nparte inteira = %d", parte_inteira);
    printf ("\nparte decimal = %f", parte_decimal);
    return 0;
}
