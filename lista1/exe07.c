#include<stdio.h>
#include<stdlib.h>

int main(){
	float fahren, celsius;
	
	scanf("%f",& fahren);
	
	celsius = 5.0 * ( fahren - 32.0 ) / 9.0;
	
	printf("A temperatura em Celsius é %f", celsius);
}
