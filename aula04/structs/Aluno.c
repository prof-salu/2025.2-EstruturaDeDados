#include <stdio.h>

int main(){
	//Propriedades de um aluno
	char nome[100];
	int idade;
	float media;
	//Capturando os dados
	printf("Informe o nome: ");
	scanf("%s", &nome);	
	printf("Informe a idade: ");
	scanf("%d", &idade);	
	printf("Informe a media: ");
	scanf("%f", &media);
	//Exibindo os dados
	printf("\n---Aluno cadastrado---");
	printf("\nNome: %s", nome);
	printf("\nIdade: %d", idade);
	printf("\nMedia: %.2f", media);	
}
