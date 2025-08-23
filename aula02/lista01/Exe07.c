#include <stdio.h>

int main(){
	/*7. Faça um Programa que leia um vetor de 5 números 
	     inteiros, mostre a soma, a multiplicação e os 
		 números. */
	
	int numeros[5];
	int soma = 0, multiplicacao = 1, media = 0, i;
	
	//printf("Soma: %d", soma);
	//printf("\nMultiplicacao: %d\n", multiplicacao);
	
	for(i = 0; i < 5; i++){
		printf("Informe o valor %02d: ", i+1);
		scanf("%d", &numeros[i]);		
	}
	
	//Somando
	for(i = 0; i < 5; i++){
		soma += numeros[i];
		//soma = soma + numeros[i];
	}
	
	//Multiplicando
	for(i = 0; i < 5; i++){
		multiplicacao *= numeros[i];
		//multiplicacao = multiplicacao * numeros[i];
	}
	
	media = soma / 5;
	
	//Exibindo
	printf("Numeros: ");
	for(i = 0; i < 5; i++){
		printf("%d ", numeros[i]);
	}
	
	printf("\nSoma: %d", soma);
	printf("\nMulplicacao: %d", multiplicacao);
	printf("\nMedia: %d", media);
}
