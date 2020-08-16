//exibir os pares de 0 a 100, usando o for
#include <stdio.h>
int main () {
    int i;
    printf ("pares de 0 a 100\n");
    for (i=0; i<=100; i=i+2) {
        printf ("%d ", i);
    }
    return 0;
}
