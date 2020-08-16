#include <stdio.h>

int main() {
	int horas, minutos, tempo_minutos;
	printf ("Digite a hora e minuto atual\n");
	scanf("%d%d", &horas,&minutos);
	
	tempo_minutos = horas * 60 + minutos;
	
	printf("\nTempo: %d minutos", tempo_minutos);
	
	return 0;
}
