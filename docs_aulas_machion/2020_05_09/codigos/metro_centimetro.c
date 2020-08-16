//ler uma medida em metros e transformar em centímetros
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
    //declara variáveis
    float m, cm;
    setlocale(LC_ALL,"");
    //entrada
    printf ("digite sua altura em metros: ");
    scanf ("%f", &m);
    //processamento
    cm = m * 100;
    //saída
    printf ("\n%.2f m correspondem a %.2f cm\n", m, cm);
    //system("pause");
    return 0;
}
