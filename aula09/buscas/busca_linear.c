#include <stdio.h>

int buscaLinear(int vetor[], int tamanho, int valor){
	int i;
	int contador = 0;
	for(i = 0; i < tamanho; i++){
		contador++;
		printf("Buscas: %d\n", contador);
		
		if(vetor[i] == valor){
			return i;//Encontrou
		}
	}	
	return 0;//Não encontrou
}

int main(){
	//int numeros[] = {22, -15, 33, 56, 83, 12, -45, 3};
	int numeros[] = {-3, 4, 12, 18, 21, 28, 32, 41, 50};
	
	int resultado = buscaLinear(numeros, 9, 4);
	
	if(resultado == 0){
		printf("Valor nao encontrado.");
	}else{
		printf("Valor encontrado na posicao: %d", resultado);
	}
}
