#include <stdio.h>
#include <math.h>

int main (){
	
	float a, b, c;
	printf("variavel A  ");
	scanf("%f", &a);
	printf("variavel B  ");
	scanf("%f", &b);
	printf("variavel C  ");
	scanf("%f", &c);
	
	float resultado;
	resultado= pow(a,2)+pow(b,2)+pow(c,2);
	
	printf("o resultado = %f", resultado);
	
	return 0;
}
