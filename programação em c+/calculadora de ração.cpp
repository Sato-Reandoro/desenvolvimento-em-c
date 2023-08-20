#include <stdio.h>
#include <math.h>

int main() {
	
	int peso, diario, dias;
	
	printf("peso da racao  ");
	scanf ("%i", &peso);
	printf("quantidade diaria da racao  ");
	scanf("%i", &diario);
	printf("quantos dias se passaram  ");
	scanf("%i", &dias);
	
	int resultado;
	resultado= peso-(diario*2*dias);
	
	printf("restou de racao = %i", resultado);
	
	return 0;
}
