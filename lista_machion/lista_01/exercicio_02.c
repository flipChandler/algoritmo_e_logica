#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float premio = 780000, primeiro, segundo, terceiro;
	
	primeiro = premio * 0.46;
	segundo = premio * 0.32;
	terceiro = premio * 0.22;
	
	printf("------------------------------------\n");
	printf("******RESULTADO DA LOTOFÁCIL******\n");
	printf("O primeiro ganhou R$ %.2f \nO segundo R$ %.2f \nE o terceiro ficou com R$ %.2f", primeiro, segundo, terceiro);
	
	return 0;
}
