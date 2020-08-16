#include<stdio.h>

int main() {
	int a, b, c;
	
	printf("Digite os valores de a, b, c para verificar se eh um triangulo:\n");
	scanf("%d%d%d", &a,&b,&c);
	
	if( a < (b+c) && a !=0 && b < (a+c) && b != 0 && c < (a+b) && c != 0){
		printf("Os valores %d, %d e %d formam um triangulo", a,b,c);
	}else{
		printf("Os valores %d, %d e %d nao formam um triangulo", a,b,c);
	}
	
	return 0;
}
