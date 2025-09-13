#include <stdio.h>
#include <stdlib.h>

int main(){
	//Crie um programa que captura a idade de X pessoas
	
	int tamanho;
	
	printf("Informe a quantidade de pessoas: ");
	scanf("%d", &tamanho);
	
	//Alocando dinamicamente a memoria (ponteiro)
	int *vetor = (int*) malloc(tamanho * sizeof(int));
	
	int i;
	for(i = 0; i < tamanho;i++){
		printf("Posicao %d: %d\n", (i+1), vetor[i]);	
	}
	
	//Liberando a memoria
	free(vetor);
}
