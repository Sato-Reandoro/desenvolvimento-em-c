#include <stdio.h>
#include <math.h>

int main(){
	int numero;
	printf ("qual o numero desejado? ");
	scanf("%i", &numero);
	
	int antecessor, sucessor;
	antecessor= numero-1;
	sucessor= numero+1;
	
	printf("o antecessor do seu numero = %i", antecessor);
	printf("  o sucessor do seu numero = %i", sucessor);     
	
	return 0;
}
