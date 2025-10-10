#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor){
	int inicio = 0;
	int fim = tamanho - 1;
	int contador = 0;
	
	while(inicio <= fim){
		int meio = inicio + (fim - inicio) / 2;
		
		contador++;
		printf("Buscas: %d\n", contador);
		
		if(vetor[meio] == valor){
			contador++;			
			return meio;//Encontrou
		}
		
		if(vetor[meio] < valor){
			inicio = meio + 1;//Procura na metade direita
		}else{
			fim = meio -1;//procura na metade esquerda
		}
	}
	return 0;//Não encontrou
}

int main(){
	int numeros[] = {-3, 4, 12, 18, 21, 28, 32, 41, 50};
	
	int resultado = buscaBinaria(numeros, 9, 4);
	
	if(resultado == 0){
		printf("Valor nao encontrado.");
	}else{
		printf("Valor encontrado na posicao: %d", resultado);
	}
}
