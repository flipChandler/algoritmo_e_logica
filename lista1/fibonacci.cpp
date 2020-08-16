#include<stdio.h>

int main(){
	int anterior = 0, proximo = 1;
	
	printf("%i ", anterior);
	
	while(proximo < 100){
		printf("%i ", proximo);
		proximo = proximo + anterior;
		anterior = proximo -  anterior;
	}	
}
