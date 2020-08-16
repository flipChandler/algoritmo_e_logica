	#include <stdio.h>
	#include <math.h>
	int main(){
	float a, b, c, delta,x1,x2;
	printf ("digite valor de a: ");
	scanf ("%f", &a);
	printf ("digite valor de b: ");
	scanf ("%f", &b);
	printf ("digite valor de c: ");
	scanf ("%f", &c);
	if (a==0) {
	    printf ("nao e uma equacao do 2 grau!");
	}
	else{ 
	delta = (b*b) - 4*a*c;
	    if (delta<0) {
	printf("nao existem raizes para essa equacao");
	}
	    else {
	        x1 = (-b - sqrt (delta)) / (2*a);
	x2 = (-b + sqrt (delta)) / (2*a);
	}
	printf ("\nx1= %f x2= %f", x1,x2);
	}
	return 0;
	}
	


