#include <stdio.h>
#include <math.h>

int main() {
	float x1, x2, y1, y2, res;
	
	printf ( "Digite as coordenadas do ponto P1 (x1 e y1): \n" );
	scanf ("%f%f", &x1, &y1);
	printf ( "Digite as coordenadas do ponto P2 (x2  y2): \n" );
	scanf ("%f%f", &x2, &y2);
	
	res = sqrt( (x1 - x2) * (x1 - x2) + ( y1 - y2) * ( y1 - y2) );
	
	printf ( "Distância = %.3f", res );
	
	return 0;
	
}
