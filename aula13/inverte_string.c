/*Elebore um programa em C que le uma palavra e imprime
o seu inverso. Utilize o conceito de pilha

PILHA --> AHLIP*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PILHA 10 //Constante

typedef struct{
	char itens[MAX_PILHA];
	int topo;
}Pilha;

void inicializarPilha(Pilha *pilha){
	pilha->topo = -1;
}
//true --> 1 false --> 0
int pilhaVazia(Pilha *pilha){
	return pilha->topo == -1;
}

int pilhaCheia(Pilha *pilha){
	return pilha->topo == MAX_PILHA - 1;
}

void inserirPilha(Pilha *pilha, char letra){
	if(pilhaCheia(pilha)){
		printf("A pilha de letras esta cheia!!\n");
		return;
	}
	
	pilha->topo++;
	pilha->itens[pilha->topo] = letra;
	printf("Letra adicionada a pilha!\n");
}

char removerPilha(Pilha *pilha){
	if(pilhaVazia(pilha)){
		printf("A pilha esta VAZIA!!!\n");
		return ' ';
	}
	
	//Captura o paciente que sera removido
	char letra = pilha->itens[pilha->topo];
	printf("Letra removida! [%s]", letra);
	pilha->topo--;
	return letra;	
}

void exibirPilha(Pilha *pilha){
	if(pilhaVazia(pilha)){
		printf("A pilha esta VAZIA!!!\n");
		return;
	}
	
	printf("\nPalavra invertida: ");
	int i;
	//Imprime do topo para a base da pilha
	for(i = pilha->topo; i >= 0; i--){
		printf("%c ", pilha->itens[i]);
	}
	printf("\n");
}

int main(){
	Pilha pilha;
	inicializarPilha(&pilha);
	
	char palavra[MAX_PILHA];
	
	printf("Informe uma palavra[limite 10 caracteres]: ");
	scanf("%s", &palavra);
	int tamanho = strlen(palavra);//Tamanho da string
	
	int i;
	for(i = 0; i < tamanho;i++){
		inserirPilha(&pilha, palavra[i]);
	}
	
	exibirPilha(&pilha);
}

