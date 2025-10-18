#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho){
	int i;
	for(i = 0; i < tamanho; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
}

void insertionSort(int vetor[], int tamanho){
	int i, contador = 0;
	
	for(i = 1; i < tamanho; i++){
		int chave = vetor[i];
		int j = i -1;
		
		while(j >= 0 && vetor[j] > chave){
			vetor[j+1] = vetor[j];
			j = j - 1;
			contador++;
		}
		vetor[j+1] = chave;
	}
	
	printf("\nTrocas: %d\n\n", contador);
}

int main(){
	int numeros[] = {64, 34, 25, 12, 22, 11, 90};
	printf("Vetor nao ordenado: ");
	imprimirVetor(numeros, 7);
	insertionSort(numeros, 7);
	printf("Vetor ordenado [insertion sort]: ");	
	imprimirVetor(numeros, 7);
}
