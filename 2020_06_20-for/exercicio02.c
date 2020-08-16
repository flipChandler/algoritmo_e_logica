#include <stdio.h> 

int main() {
	int a, b, i;
	
	printf("Digite o valor de a e b:\n");
	scanf("%d%d", &a, &b);	
	
	if (a < b) {	
		for( i = a; i <= b; i++){
			printf("%d ", i);
		}
	}else{
		for( i = b; i <= a; i++){
			printf("%d ", i);
		}
	}
	
	return 0;
}
