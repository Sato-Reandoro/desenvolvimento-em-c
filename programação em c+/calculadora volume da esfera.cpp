#include <stdio.h>
#include <math.h>

int main(){
	float raio;
	printf("qual o raio da esfera?  ");
	scanf("%f", &raio);
	
	float calculo;
	calculo = 3.14159*pow(raio,3)*(4/3);
	
	printf("o volume da esfera é = %f", calculo);
	
	return 0;
}
