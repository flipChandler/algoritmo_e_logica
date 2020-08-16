#include <stdio.h>

int main() {
	int opcao_pagto;
	float compra;
	char boleto_cartao;
	printf ("Digite o valor da compra: ");
	scanf ("%f", &compra);
	printf ("Digite a forma de pagamento: \n1 - a vista \n2 - a prazo \n--->");
	scanf ("%d", &opcao_pagto);
	
	if (opcao_pagto == 1) {
		printf ("Digite [b] para boleto ou [c] para cartao:\n");
		scanf (" %c", &boleto_cartao);
		if (boleto_cartao == 'b' || boleto_cartao == 'B'){
			if (compra <= 200) {
				printf ("\nvalor a pagar: R$ %.2f\n", 0.95 * compra);
			}else if (compra <= 500){
				printf ("\nvalor a pagar: R$ %.2f\n", 0.93 * compra);
			}
			else if (compra <= 1000){
				printf ("\nvalor a pagar: R$ %.2f\n", 0.9 * compra);
			}
			else{
				printf ("\nvalor a pagar: R$ %.2f\n", 0.85 * compra);
			}
		}
	}else if (boleto_cartao == 'c' || boleto_cartao == 'C') {
		
	}	
	
	return 0;
}
