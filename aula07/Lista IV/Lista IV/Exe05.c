#include <stdio.h>

int main(){
	int tamanho;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	//Criando o vetor dinamico
	float *vetor = (float*) malloc(tamanho * sizeof(float));
	
	//Sempre verificar se a alocação foi bem-sucedida
	if(vetor == NULL){
		printf("Falha na criacao do vetor!");
		return 1;
	}
	
	int i;
	float somaValores = 0;
	printf("Informe os %d valores: \n", tamanho);
	for(i = 0; i < tamanho; i++){
		printf("Digite o valor %d: ", i+1);
		scanf("%f", &vetor[i]);
		somaValores += vetor[i];		
	}
	
	float media = somaValores / tamanho;
	
	printf("Media dos valores: %.2f", media);
	
	//Liberando a memoria
	free(vetor);
}
