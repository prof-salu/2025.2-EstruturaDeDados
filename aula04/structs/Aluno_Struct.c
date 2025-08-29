#include <stdio.h>
#include <string.h>

//Definindo o struct (**SEMPRE ANTES DO MAIN**)
struct Aluno{
	//MEMBROS
	char nome[100];
	int idade;
	float media;
};

int main(){
	//Declarando o struct Aluno
	struct Aluno a1;
	struct Aluno a2;
	
	//DOT Notation
	a1.idade = 37;
	a1.media = 8.4;
	strcpy(a1.nome, "Juca");
	
	//Exibindo os dados
	printf("\n---Aluno cadastrado---");
	printf("\nNome: %s", a1.nome);
	printf("\nIdade: %d", a1.idade);
	printf("\nMedia: %.2f", a1.media);	
}
