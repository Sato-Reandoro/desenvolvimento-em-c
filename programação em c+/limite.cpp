#include <stdio.h>

int main(){
	int limite;
	printf("digite o limite ");
	scanf("%i", &limite);
	
	for(int contador=0; contador<=limite; contador++){
		printf("seus numeros sao: %i \n", contador);
	}
	
	return 0;
}
