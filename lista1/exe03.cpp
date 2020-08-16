#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1, num2, num3;
	
	scanf("%i",& num1);
	scanf("%i",& num2);
	scanf("%i",& num3);
	
	num3 += num1 + num2;
	
	printf("%i",num3);
}
