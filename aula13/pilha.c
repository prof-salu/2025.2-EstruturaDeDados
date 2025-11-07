#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PILHA 10 //Constante

typedef struct{
	int id;
	char nome[50];
}Paciente;

typedef struct{
	Paciente itens[MAX_PILHA];
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

void inserirPilha(Pilha *pilha, Paciente paciente){
	if(pilhaCheia(pilha)){
		printf("A pilha de pacientes esta cheia!!\n");
		return;
	}
	
	pilha->topo++;
	pilha->itens[pilha->topo] = paciente;
	printf("Paciente adicionado a pilha!\n");
}

Paciente removerPilha(Pilha *pilha){
	Paciente vazio = {-1, "VAZIO"};
	if(pilhaVazia(pilha)){
		printf("A pilha esta VAZIA!!!\n");
		return vazio;
	}
	
	//Captura o paciente que sera removido
	Paciente paciente = pilha->itens[pilha->topo];
	printf("Paciente removido! [%s]", paciente.nome);
	pilha->topo--;
	return paciente;	
}

void exibirPilha(Pilha *pilha){
	if(pilhaVazia(pilha)){
		printf("A pilha esta VAZIA!!!\n");
		return;
	}
	
	printf("\nPilha de atendimento\n");
	int i;
	//Imprime do topo para a base da pilha
	for(i = pilha->topo; i >= 0; i--){
		printf("[ID: %d, Nome: %s]\n", pilha->itens[i].id,
		                               pilha->itens[i].nome);
	}
}

int main(){
	Pilha pilha;
	inicializarPilha(&pilha);
	
	Paciente p1 = {10, "Gabi"};
	Paciente p2 = {11, "Gigi"};
	Paciente p3 = {12, "Joao"};
	Paciente p4 = {13, "Harry"};
	
	exibirPilha(&pilha);
	removerPilha(&pilha);
	
	inserirPilha(&pilha, p1);
	inserirPilha(&pilha, p2);
	inserirPilha(&pilha, p3);
	inserirPilha(&pilha, p4);
	
	exibirPilha(&pilha);
	removerPilha(&pilha);
	exibirPilha(&pilha);	
}
