#include <stdio.h>

int main() {
	int cont = 1, numero, soma, cont_positivos = 0;
	float media;
	printf("Digite 10 n�meros: \n");
	while(cont <= 10){		
		scanf("%d", &numero);
		if( numero >= 0){
			soma = soma + numero;
			cont_positivos++;	
		}
		cont++;
	}
	
	if (cont_positivos > 0) {
		media = (float) soma / (float)cont_positivos;
		printf("A media eh %f", media);
	}else{
		printf("Valores positivos n�o foram digitados!");
	}	
	return 0;
}
