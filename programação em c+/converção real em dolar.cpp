#include <stdio.h>
#include <math.h>

int main(){
	float reais, dolar;
	printf("quantos reais querem ser convertidos?  ");
	scanf("%f", &reais);
	printf("cotacao atual do dolar  ");
	scanf("%f", &dolar);
	
	float convercao;
	convercao = reais/dolar;
	
	printf ("o valor da convercao = %f", convercao);
	return 0;
}
