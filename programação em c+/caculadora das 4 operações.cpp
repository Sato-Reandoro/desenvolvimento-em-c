#include <stdio.h>
#include <math.h>
int main(){
	float a, b, mais, menos, divisao, multiplicacao;
	printf("valor da variavel A  ");
	scanf("%f", &a);
	printf("valor da variavel B  ");
	scanf("%f", &b);


    mais= a+b;
    
    menos=a-b;
    
    divisao= a/b;
    
    multiplicacao= a*b;
    
    printf("o valor do resultado da soma = %f", mais);
	
	printf("     o valor do resultado da subtracao = %f", menos);
	
    printf("                              o valor do resultado da divisao = %f", divisao);
    
   	printf("   o valor do resultado da multiplicacao = %f", multiplicacao);
		
		
	
	return 0;
}
