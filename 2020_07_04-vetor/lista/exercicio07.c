#include<stdio.h>
#define TAMANHO 10
int main() {
	int vetor[TAMANHO], vetor_multiplos[TAMANHO], i, j, x, conta_multiplos = 0;
	
	for (i = 0; i < TAMANHO; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nDigite o valor de x: ");
	scanf("%d", &x);
	
	//se i = 10, percorreu o vetor e não encontrou nenhum multiplo de x
	//se i < 10, encontra a 1ª posição do vetor que tem um multiplo de x
	i = 0;
	while ( (i < TAMANHO) && (vetor[i] % x != 0) ) {
		i++;
	}
		
	if (i < TAMANHO) {
		vetor_multiplos[0] = vetor[i]; // recebe o 1º multiplo de x
		conta_multiplos = 1; // já conta 1 multiplo encontrado
		for (j = i + 1; j < TAMANHO; j++) {// percorre o vetor partindo uma posição após encontrado o 1º multiplo 
			if (vetor[j] % x == 0) { // se valor dividio por x for zero
				vetor_multiplos[conta_multiplos] = vetor[j]; // recebe os demais multiplos, 
				conta_multiplos++; // conta mais 1 multiplo encontrado				
			}
		}
		printf("\nTotal de multiplos de %d = %d\n", x, conta_multiplos);
		
		printf("Multiplos de %d digitados -> ", x);
			
		for (i = 0; i < conta_multiplos; i++) { // printa os multiplos conforme a contagem 
			printf("%d ", vetor_multiplos[i]);
		}		
		
	}else{
		printf("Nao contem multiplos de %d na lista de valores.\n", x);
	}	
	
	return 0;
}
