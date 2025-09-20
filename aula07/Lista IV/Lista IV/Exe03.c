#include <stdio.h>
void encontraMinMax(int *vetor, int tamanho, int *min, int *max){
	int i;
	
	*min = vetor[0];
	*max = vetor[0];
	
	for(i = 1; i < tamanho; i++){
		if(vetor[i] > *max){
			*max = vetor[i];
		}
		
		if(vetor[i] < *min){
			*min = vetor[i];
		}
	}
}

int main(){
	int numeros[] = {2, 5, 8, 12, -2, 6};
	int tamanho = 6;
	int valorMin, valorMax;
	encontraMinMax(&numeros, tamanho, &valorMin, &valorMax);
	
	printf("Valor maximo: %d\n", valorMax);
	printf("Valor minimo: %d\n", valorMin);
}
