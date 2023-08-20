#include <stdio.h>
int main(){
	int a, b;
	printf("qual o primeiro valor? ");
	scanf("%i", &a);
	printf("qual o valor de b? ");
	scanf("%i", &b);

 if(a>b){
 	printf("o maior valor e %i", a);
 }
 else{
 	if(a<b){
 		printf("o maior valor e %i", b);
	 }
 }	
	return 0;
}
