#include <stdio.h>

int main (){
	int n, i;
	float notas, soma=0, media;
	
	printf("quantas notas tiveram?");
	scanf("%i", &n);
	
	for (i=1; i<=n; i++){
		printf("digiti a nota %d: ",i );
		scanf("%f", &notas);
		soma +=notas;
	}
	
	media= soma/n;
	printf("a media das %i notas e %.2f\n", n, media);
	
	return 0;
}
