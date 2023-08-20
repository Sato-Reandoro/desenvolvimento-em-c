#include <stdio.h>
#include <math.h>

int main (){
	int a, b, aux;
	
	printf ("qual o valor de A?  ");
	scanf ("%i", &a);
	printf ("qual o valor de B?  ");
	scanf ("%i", &b);
	
	aux= b;
	b=a;
	a= aux;
	
	printf ("o valor de a = %i", aux);
	
	return 0;
}
