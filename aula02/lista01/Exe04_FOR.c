#include <stdio.h>

int main(){
	/*4. Faça um Programa que peça quatro números e imprima o 
	maior deles.*/
	
	int entrada, maior, i, total;
	
	printf("Informe o total de numeros: ");
	scanf("%d", &total);
	
	for(i = 0; i < total; i++){
		printf("Informe o valor %02d: ", i+1);
		scanf("%d", &entrada);
		
		if(i == 0){
			maior = entrada;
		}
		
		if(entrada >= maior){
			maior = entrada;
		}
	}
	
	printf("O maior valor e: %d", maior);	
}
