#include <stdio.h>
void trocaValores(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void imprimirVetor(int vetor[], int tamanho){
	int i;
	for(i = 0; i < tamanho; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
}

void bubbleSort(int vetor[], int tamanho){
	int i, j, contador = 0;
	
	for(i = 0; i < tamanho-1; i++){
		for(j = 0; j < tamanho -i - 1; j++){
			if(vetor[j] > vetor[j + 1]){
				trocaValores(&vetor[j], &vetor[j+1]);
				contador++;
			}
		}
	}
	
	printf("\nTrocas: %d\n\n", contador);
}



int main(){
	int numeros[] = {64, 34, 25, 12, 22, 11, 90};
	printf("Vetor nao ordenado: ");
	imprimirVetor(numeros, 7);
	bubbleSort(numeros, 7);
	printf("Vetor ordenado [bubble sort]: ");
	imprimirVetor(numeros, 7);
}
