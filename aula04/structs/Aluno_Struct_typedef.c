#include <stdio.h>
#include <string.h>

typedef struct{
	//MEMBROS
	char nome[100];
	int idade;
	float media;
}Aluno;

int main(){
	Aluno a1 = {"Marcelo", 23, 7.9};
	
	Aluno a2;
	strcpy(a2.nome, "Mariana");
	a2.idade = 39;
	a2.media = 8.3;
	
	//Exibindo os dados
	printf("\n---Aluno cadastrado---");
	printf("\nNome: %s", a1.nome);
	printf("\nIdade: %d", a1.idade);
	printf("\nMedia: %.2f", a1.media);	
	
	//Exibindo os dados
	printf("\n---Aluno cadastrado---");
	printf("\nNome: %s", a2.nome);
	printf("\nIdade: %d", a2.idade);
	printf("\nMedia: %.2f", a2.media);	
}
