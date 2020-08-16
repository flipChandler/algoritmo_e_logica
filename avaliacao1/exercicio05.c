#include <stdio.h>

int main() {
	float preco, percentual, desconto, preco_final;
	
	printf ("Digite o preco do produto:\n");
	scanf ("%f", &preco);
	printf ("Digite o percentual de desconto desejado:\n");
	scanf ("%f", &percentual);
	
	desconto = preco * percentual / 100;
	preco_final = preco - desconto;
	
	printf ("\nValor de desconto: R$ %.2f\nPreco final: R$ %.2f", desconto, preco_final);
	
	return 0;
}
