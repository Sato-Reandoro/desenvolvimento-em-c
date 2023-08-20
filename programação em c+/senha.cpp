#include <stdio.h>
int main (){
	int senha;
	
	printf("digite a senha: ");
	scanf("%i", &senha);
	
	if(senha==1234){
		printf("acesso permitido");
	}
	else{
		printf("acesso negado");
	}
	
	return 0;
}
