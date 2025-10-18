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

void selectionSort(int vetor[], int tamanho){
	int i, j, contador = 0;
	
	for(i = 0; i < tamanho - 1; i++){
		int indice_min = i;
		for(j = i + 1; j < tamanho; j++){
			if(vetor[j] < vetor[indice_min]){
				indice_min = j;
			}
		}
		trocaValores(&vetor[indice_min], &vetor[i]);
		contador++;
	}
	
	printf("\nTrocas: %d\n\n", contador);
}

int main(){
	int numeros[] = {64, 34, 25, 12, 22, 11, 90};
	printf("Vetor nao ordenado: ");
	imprimirVetor(numeros, 7);
	selectionSort(numeros, 7);
	printf("Vetor ordenado [selection sort]: ");	
	imprimirVetor(numeros, 7);
}
