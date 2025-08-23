#include <stdio.h>

int main(){
	/*4. Faça um Programa que peça quatro números e imprima o 
	maior deles.*/
	
	int n1, n2, n3;
	
	printf("informe o valor de n1: ");
	scanf("%d", &n1);
	
	printf("informe o valor de n2: ");
	scanf("%d", &n2);
	
	printf("informe o valor de n3: ");
	scanf("%d", &n3);
	
	if(n1 >= n2 && n1 >= n3){
		printf("O maior valor e: %d", n1);
	}else if(n2 >= n1 && n2 >= n3){
		printf("O maior valor e: %d", n2);
	}else{
		printf("O maior valor e: %d", n3);
	}
}
