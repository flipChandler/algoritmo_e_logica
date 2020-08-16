#include <stdio.h>

int main() {
	int a1, a2, a3;
	printf("Digite o valor de a1 e a2:\n");
	scanf("%d%d", &a1, &a2);
	printf ("\nDigite o valor de a3:\n");
	scanf("%d", &a3);
	
	if (a3 >= a1 && a3 <= a2){
		printf("\nO valor de a3 [%d] pertence ao intervalo de a1 e a2 [%d ... %d]", a3, a1, a2);
	}else{
		printf("\nO valor de a3 [%d] nao pertence ao intervalo de a1 e a2 [%d ... %d]", a3, a1, a2);
	}
	
	return 0;
}
