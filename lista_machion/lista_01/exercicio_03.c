#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float cateto_a, cateto_b, hipotenusa_h;
	
	printf("Digite o valor do cateto a: ");
	scanf("%f", &cateto_a);
	printf("Digite o valor do cateto b: ");
	scanf("%f", &cateto_b);
	
	hipotenusa_h = sqrt( (cateto_a * cateto_a) + (cateto_b * cateto_b) );
	
	printf("O valor da hipotenusa h é %f", hipotenusa_h);
	
	return 0;
}
