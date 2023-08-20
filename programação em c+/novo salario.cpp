#include <stdio.h>
int main(){
	float salario;
	printf("qual o seu salario atual? ");
	scanf("%f", &salario);
	
	float novosa;
	novosa= salario+salario*0.25;
	
	printf("seu novo salario e = %f", novosa);
	return 0;
}
