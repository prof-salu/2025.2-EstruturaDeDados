#include <stdio.h>

int main(){
	/*Fa�a um Programa que pe�a as 4 notas bimestrais,
	e mostre a m�dia.*/
	
	float n1, n2, n3, n4, media;	
	
	printf("Informe a n1: ");
	scanf("%f", &n1);
	
	printf("Informe a n2: ");
	scanf("%f", &n2);
	
	printf("Informe a n3: ");
	scanf("%f", &n3);
	
	printf("Informe a n4: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4)/ 4;
	
	printf("Media: %.2f", media);
}
