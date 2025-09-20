#include <stdio.h>

void somaVetores(float *vetorA, float *vetorB, 
				 float *VetorC, int tamanho){
	int i;
	
	for(i = 0; i < tamanho; i++){
		VetorC[i] = vetorA[i] + vetorB[i];
	}
}

int main(){
	float vA[] = {5, 5.5, 6, 7, 8.2};
	float vB[] = {3.1, 6.2, 5, 1.9, 0.5};
	int tamanho = 5, i;
	float vC[tamanho];
	
	somaVetores(vA, vB, vC, tamanho);
	
	printf("Soma dos valores: ");
	for(i = 0; i < tamanho; i++){
		printf("%.1f ", vC[i]);
	}
}
