#include <stdio.h>
#include <math.h>

int main(){
   int nascimento; 
	
	printf ("em que ano vc nasceu?  ");
	scanf ("%i", &nascimento);
	
	int idade;
	idade = 2023-nascimento;
	
	int meses;
	meses = idade*12;
	
	int semanas;
	semanas = meses*4;
	
	int dias;
	dias = semanas*7;
	
	int horas;
	horas= dias*24;
	
	printf ("sua idade = %i", idade );
	printf ( "   sua idade em meses = %i", meses);
	printf ("   sua idade em semanas = %i", semanas);
	printf ("   sua idade em dias = %i", dias );
	printf ("   sua idade em horas = %i", horas);

	
	
	return 0;
}
