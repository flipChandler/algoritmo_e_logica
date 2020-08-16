#include <stdio.h>

int main() {
	int quantidade;
	float pagamento;
	printf ("De uma duzia pra cima, macas custam R$ 0,25 cada.\nMenor que uma duzia, custa R$ 0,30 cada.\n");
	printf ("Digite a quantidade de macas desejadas:\n");
	scanf ("%d", &quantidade);
	
	if (quantidade >= 12) {		
		pagamento = quantidade * 0.25;
	}else{
		pagamento = quantidade * 0.30;
	}	
	printf ("O valor a ser pago pelas macas eh %.2f", pagamento);
	
	return 0;
}
