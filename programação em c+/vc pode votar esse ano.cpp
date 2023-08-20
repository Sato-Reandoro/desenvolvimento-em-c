#include <stdio.h>
int main(){
	int idadem, nascimento;
	
	printf("em que ano vc nansceu? ");
	scanf("%i", &nascimento);
	
	idadem=16;
	
	if (2023-nascimento>=idadem){
		printf("vc ja pode votar!");
	}
	else{
		printf("vc ainda nn pode votar!");
	}
	
	
	return 0;
}
