#include <stdio.h>

int main() {
	
	int contador = 0, limite = 20;
	
	while(contador <= limite){// 21 < 20		
		printf("estamos na linha %d\n", contador);		
		contador = contador + 1;//
	}
	
	printf("%d", contador);	
	
	return 0;
	
}
