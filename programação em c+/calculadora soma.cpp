#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	printf("primeiro valor ");
	scanf("%i", &a);
	printf("segundo valor ");
	scanf("%i", &b);
	
	int resultado;
	resultado = a + b;
	
	printf ("a soma deu = %i", resultado);
	
	return 0;
}
