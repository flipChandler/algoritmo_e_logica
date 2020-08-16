#include <stdio.h>
#include <math.h>

int main() {
	
	float a, b, c, delta, x1, x2;	
	
	printf ("digite o valor dos coeficientes a, b, c :\n");
	scanf ("%f%f%f", &a, &b, &c);
	
	if(a == 0) {
		printf ("não é equação do 2º grau!");
	}else{		
		delta = b * b - 4 * a * c;		
		if (delta < 0) {
			printf("Nao existem raizes reais!");
		}
		else{
			x1 = (-b - sqrt(delta) ) / (2 * a);
			x2 = (-b + sqrt(delta) ) / (2 * a);
			printf ("\nX1: %.3f\nX2: %.3f", x1, x2);			
		}		
	}
	
	return 0;
}
