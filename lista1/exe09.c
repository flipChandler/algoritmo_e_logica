#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float celsius, kelvin;
	
	printf("Digite a temperatura em Celsius");
	scanf("%f",& celsius);
	
	kelvin = celsius + 273.15;
	
	printf("A temperatura em Kelvin � %.2f", kelvin);	

	return 0;	
}
