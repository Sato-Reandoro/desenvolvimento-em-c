#include <stdio.h>
int main (){
	float macas;
	printf("quantas macas foram compradas?");
	scanf("%f", &macas);
	
	float vtotal, ytotal;
	
	if(macas<12){
		vtotal= macas*0.30;
		
		printf("o valor total das macas e %.2f", vtotal);
	}
	else{
		if(macas>=12){
			ytotal= macas*0.25;
			
			printf("o valor total das macas e %.2f", ytotal);
		}
	}
	
	
	return 0;
}
