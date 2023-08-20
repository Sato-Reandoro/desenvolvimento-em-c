#include <stdio.h>
#include <math.h>

int main() {
 float salario, aumento;
  	printf ("qual o salario atual   ");
  	scanf ("%f", &salario);
  	printf ("qual o valor do aumento   ");
  	scanf ("%f", &aumento);
  	
  	float novosalario;
  	
  	novosalario = salario+salario*(aumento/100);

	 printf("o novo salario = %f", novosalario);
	return 0;
}
