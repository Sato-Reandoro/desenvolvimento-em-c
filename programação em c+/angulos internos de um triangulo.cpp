#include <stdio.h>

int main (){
float a, b, c;

printf("qual o valor do primeiro angulo? ");
scanf("%f", &a);	
	printf("qual o valor do segundo angulo? ");
scanf("%f", &b);
printf("qual o valor do terceiro angulo? ");
scanf("%f", &c);

float Atotal;

Atotal= a+b+c;

if(Atotal==90){
	printf("e um triangulo retangulo!");
}

else if(Atotal>90){
	printf("e um triangulo Obtusangulo!");
}


else{
	printf("e um triangulo Acutangulo");
}


	return 0;
}

