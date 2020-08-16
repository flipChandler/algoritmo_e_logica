#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
	float graus, seno, cosseno, tangente, radiano;
	
	printf ("Digite o valor em graus:\n");
	scanf ("%f", &graus);
	
	radiano = graus * PI / 180;
	
	seno = sin(radiano);
	cosseno = cos(radiano);
	tangente = tan(radiano);
	
	printf("O seno eh : %.4f\n", seno);
	printf("O cosseno eh : %.4f\n", cosseno);
	printf("O tangente eh : %.4f\n", tangente);
	
	return 0;
}
