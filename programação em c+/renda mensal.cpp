#include<stdio.h>
#include <math.h>
int main(){
	char familia=20;
	float salario;
	
	printf("sua renda e familia (3 integrantes ou mais)? ");
	scanf("%s", &familia);
	printf("quanto vc recebe mensalmente? ");
	scanf("%f", &salario);
	
	if(familia=='sim'){
		if( salario>=10000){ 
		printf("vc e classe alta");
		else{ if(salario>=6000){
			printf("vc e classe media");
		}
		}
	}
	}
	else{ if(familia=='nao'){
		if( salario>=6000){
		printf("vc e asdsad");
	}
	}
	}
	
	
	return 0;
}
