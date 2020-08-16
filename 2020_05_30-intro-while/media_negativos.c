#include <stdio.h>

int main() {
	int cont = 1, numero, soma, cont_positivos = 0;
	float media;
	printf("Digite 10 números: \n");
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
		printf("Valores positivos não foram digitados!");
	}	
	return 0;
}
