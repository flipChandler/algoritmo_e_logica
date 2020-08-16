#include<stdio.h>
#include<stdlib.h>

int main(){
	float kelvin, celsius;
	
	printf("Digite a temperatura em Kelvin: ");
	scanf("%f",& kelvin);
	
	celsius = kelvin - 273.15;
	
	printf("A temperatura em Celsius é %.2f ", celsius);	
	
}
