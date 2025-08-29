#include <stdio.h>

typedef struct{
	//MEMBROS
	char nome[100];
	int idade;
	float media;
}Aluno;

int main(){
	Aluno vetor[3];
	int i;
	//Capturando os dados dos alunos
	for(i = 0; i < 3; i++){
		printf("Informe o nome: ");
		scanf("%s", &vetor[i].nome);
		
		printf("Informe a idade: ");
		scanf("%d", &vetor[i].idade);
		
		printf("Informe a media: ");
		scanf("%f", &vetor[i].media);
	}
	
	//Exibindo os dados
	for(i = 0; i < 3; i++){
		printf("\n\n---Aluno cadastrado---");
		printf("\nNome: %s", vetor[i].nome);
		printf("\nIdade: %d", vetor[i].idade);
		printf("\nMedia: %.2f", vetor[i].media);
	}
}
