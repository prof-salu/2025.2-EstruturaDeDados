#include <stdio.h>

void dobrarElementos(int *vetor, int tamanho){
	int i;
	for(i = 0; i < tamanho; i++){
		//*(vetor + i) = *(vetor + i) * 2;
		vetor[i] = vetor[i] * 2;
	}
}

int main(){
	int numeros[] = {1,2,3,4,5};
	int tamanho = 5, i;	
	dobrarElementos(numeros, tamanho);
	printf("Vetor dobrado --> ");
	for(i = 0; i < tamanho; i++){
		printf("%d ", numeros[i]);
	}
}
