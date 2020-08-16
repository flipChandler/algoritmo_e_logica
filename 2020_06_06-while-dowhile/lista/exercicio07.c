#include <stdio.h>

int main() {
	float fatorial, numerador = 0, i = 0, j, s;
	
	while (i <= 8){
		fatorial = 1;
		j = i; // 4 
		while (j >= 1){
			fatorial *= j;
			j--;
		}		
		s += numerador / fatorial;// 1 / 2
		numerador++; // 2
		i += 2;// 4		
	}
	
	printf("S = %.6f", s);
	
	
	return 0;
}
