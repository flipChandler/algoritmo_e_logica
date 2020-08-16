#include <stdio.h>
#include <math.h>

int main() {
	
	float cateto_o, cateto_a, hipotenusa;
	
	printf("Informe o cateto oposto:\n");
	scanf("%f", &cateto_o);
	printf("Informe o cateto adjacente:\n");
	scanf("%f", &cateto_a);
	
	if (cateto_o <= 0 || cateto_a <= 0){
		printf("Não existe hipotenusa com catetos <= 0!");
	}else{
		hipotenusa = sqrt(cateto_o * cateto_o + cateto_a * cateto_a);
		printf("Hipotenusa: %.4f", hipotenusa);	
	}		
	return 0;
}
