#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	float h, peso_ideal;
	char sexo;
		
	printf ("Digite a altura: \n");
	scanf ("%f", &h);
	printf ("Digite o seu sexo: \n");
	scanf(" %c", &sexo);
	
	if ( (sexo == 'M' || sexo == 'm') ) {
		peso_ideal = 72.7 * h - 58;		
	}else{
		peso_ideal = 62.1 * h - 44.7;	
	}	
	
	printf ("O peso ideal é %f ", peso_ideal);
	
	return 0;
}



