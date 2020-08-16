#include <stdio.h> 

int main() {
	
	int numero, unidade, dezena;
	
	printf ("Digite um numero inteiro: \n");
	scanf ("%d", &numero);// 116	
		
	dezena = numero % 100;
		
	if(numero % 4 == 0 && dezena % 4 == 0){
		printf ("\nO numero %d e sua dezena %d sao diviseis por 4", numero, dezena);
	}else{
		printf ("\nO numero %d e sua dezena %d nao eh divisel por 4", numero, dezena);
	}
	
	return 0;
}
