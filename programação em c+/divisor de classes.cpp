#include <stdio.h>
#include <math.h>

int main (){
	char familia;
	float salario;
	
	printf("sua renda e familiar? ");
	scanf("%c", &familia);
	printf("qual o seu salario mensal? ");
	scanf("%f", &salario);
	
	if(familia == 's'){
		if(salario >= 220000){
			printf("vc pode ate comprar o vini");}
		else{
			if(salario>=7100){
			printf("sua familia e classe b");
		      }
		else{
			if(salario>=2900){
				printf("sua familia e classe c");
			}
		else{
			if(salario>=2900){
				printf("carai vc e o vini");
			}
		}
		}
	}
	}
	else{
	if(familia == 'n'){
	if(salario >= 15000){
			printf("vc pode comprar um escravo");}
		else{
			if(salario>=5000){
			printf("vc e classe B");
		      }
		else{
			if(salario>=1900){
				printf("vc e classe c");
			}
		else{
			if(salario>=1320){
				printf("carai vc é o vini kkk");
			}
		}
		}
	}
	}
}
	return 0;
}
