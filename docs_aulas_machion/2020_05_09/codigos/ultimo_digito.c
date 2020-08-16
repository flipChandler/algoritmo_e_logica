//para obter o último digito de um número, basta executar a operação
//resto por 10. Ler um número inteiro qualquer e exibir seu último
//dígito

#include <stdio.h>
int main()
{
    int numero, ultimo_digito;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    ultimo_digito = numero % 10;
    printf("%d", ultimo_digito);

    return 0;
}
