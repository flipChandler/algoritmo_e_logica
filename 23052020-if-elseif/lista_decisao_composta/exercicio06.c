#include<stdio.h>

int main() {
	int codigo, quantidade;
	float total_pagar;
	
	printf("Digite o codigo do produto desejado\n");
	printf("[100] - Cachorro-quente - Pre�o: R$ 1.100\n");
	printf("[101] - Bauru simples - Pre�o: R$ 1.300 \n");
	printf("[102] - Bauru com ovo - Pre�o: R$ 1.500\n");
	printf("[103] - Hamburguer - Pre�o: R$ 1.100\n");
	printf("[104] - Cheesebuger - Pre�o: R$ 1.300\n");
	printf("[105] - Refrigerante - Pre�o: R$ 1.000\n");
	scanf("%d", &codigo);
	printf("Digite a quantidade desse produto\n");
	scanf("%d", &quantidade);
	
	if (codigo == 100) {
		total_pagar = quantidade * 1.100;
	}else if (codigo == 101){
		total_pagar = quantidade * 1.300;
	}else if (codigo == 102){
		total_pagar = quantidade * 1.500;
	}else if (codigo == 103){
		total_pagar = quantidade * 1.100;
	}else if (codigo == 104){
		total_pagar = quantidade * 1.300;
	}else if (codigo == 105){
		total_pagar = quantidade * 1.000;
	}else {
		printf("Codigo do produto inv�lido");
	}
	
	printf("Total a pagar eh R$ %.2f", total_pagar);	
	
	return 0;
}
