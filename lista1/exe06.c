#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float celsius, fahren;
	
	scanf("%f",& celsius);
	
	fahren = celsius * ( 9.0 / 5.0 ) + 32.0;
	
	printf("A temperatura em Fahrenheit é %f", fahren);	
		
}
