#include <stdio.h>

int main (){
float a, b, c;

printf("qual o lado esquerdo do triangulo? ");
scanf("%f", &a);	
	printf("qual o lado direito do triangulo? ");
scanf("%f", &b);
printf("qual a base do triangulo? ");
scanf("%f", &c);

if(a==b && b==c){
	printf("e um triangulo equilatero!");
}

else if(a==b || a==c || b==c){
	printf("e um triangulo isocele!");
}


else{
	printf("e um triangulo escaleno");
}


	return 0;
}

