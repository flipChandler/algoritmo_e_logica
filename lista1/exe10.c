#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float km_h, m_s;
	
	printf("Digite a velocidade em KM/h");
	scanf("%f",& km_h);
	
	m_s = km_h / 3.6;
	
	printf("A velocidade em M/s é de %f ", m_s);
		
	return 0;
}
