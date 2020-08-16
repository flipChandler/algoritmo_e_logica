#include <stdio.h>

int main() {
	int numero, cont = 0, aux = 0, unidade, dezena, centena;
	
	printf ("Digite um numero inteiro entre 100 e 999: \n");
	scanf("%d", &numero);
	
	aux = numero;
	
	while(cont <= numero){
		if (cont == (numero % 10)) {
			unidade = aux % 10;
			aux -= unidade;
		}
		else if(cont == (aux % 100)){
			dezena = aux % 100;
			aux -= dezena;
		}
		else{
			centena = aux;
		}
		cont++;
	}
	
	centena /= 100;
	dezena /= 10;
	
	printf ("\nAlgarismos de %d = %d, %d e %d", numero, centena, dezena, unidade);	
	
	return 0;
}


