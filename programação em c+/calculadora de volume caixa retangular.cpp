#include <stdio.h>
#include <math.h>

int main(){
	float altura, comprimento, largura;
	printf("qual a altura da caixa retangular?  ");
	scanf("%f", &altura);
	printf("qual o comprimento da caixa retangular?  ");	
	scanf("%f", &comprimento);
	printf("qual a largura da caixa retangular?  ");	
	scanf("%f", &largura);
	
	float resultado;
	resultado =  altura*comprimento*largura;
	
	printf("o volume da caixa =  %f", resultado);
	
	return 0;
}
