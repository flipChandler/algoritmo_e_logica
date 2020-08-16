#include<stdio.h>

int main() {
	int num1, num2, cont, soma_par, multi_impar;
	
	printf("Digite 2 numeros inteiros:\n");
	scanf("%d%d", &num1,&num2);
	
	while(num1 <= num2){
		if (num1 % 2 == 0){
			soma_par += num1;
		}else{
			multi_impar *= num1;
		}
		num1++;
	}
	
	printf("Soma dos numeros pares = %d\n", soma_par);
	printf("Multiplicacao dos numeros impares = %d\n", multi_impar);
	
	
	return 0;
}
