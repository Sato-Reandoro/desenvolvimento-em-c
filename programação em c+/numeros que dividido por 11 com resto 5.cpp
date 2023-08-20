#include <stdio.h>

int main(){
	int contador;
	
	printf("numeros de 1000 a 1999 que divididos por 11 tem resto 5:");
	for(contador=1000; contador<=1999; contador++){
	if(contador %11==5) {
		printf("%i\n", contador);
	}
}
	return 0;
}
