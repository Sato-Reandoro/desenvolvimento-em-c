#include <stdio.h>
#include <math.h>
int main(){
	float total, variavel;
	printf("qual o valor maximo(ligado ao 100)? ");
	scanf("%f", &total);
	printf("qual a variavel(ligado ao x)? ");
	scanf("%f", &variavel);
	
	float x;
	x=total*variavel/100;
	
	printf("o valor de x = %f", x);
	
	return 0;
}
