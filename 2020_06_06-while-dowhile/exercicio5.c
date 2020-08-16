#include <stdio.h>

int main() {
	int cont = 1, denominador = 10;
	float s = 0;
	
	while (cont <= 10){
		s += (float) cont / denominador;
		cont++;
		denominador--; 
	}	
	printf("S = %.2f", s);		
	
	return 0;	
}
