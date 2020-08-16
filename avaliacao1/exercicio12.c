#include <stdio.h>

int main() {
	int x, y;
	printf ("Digite as coordenadas de x e y:\n");
	scanf ("%d%d", &x, &y);
	
	if( x >= 0 && y >= 0) {
		printf ("x = %d e y = %d pertencem ao primeiro quadrante!", x, y);
	}else if (x < 0 && y >= 0){
		printf ("x = %d e y = %d pertencem ao segundo quadrante!", x, y);
	}else if (x <= 0 && y < 0) {
		printf ("x = %d e y = %d pertencem ao terceiro quadrante!", x, y);
	}else{
		printf ("x = %d e y = %d pertencem ao quarto quadrante!", x, y);
	}	
	return 0;
	
}
