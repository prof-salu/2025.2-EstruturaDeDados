#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Elaborar um sistema que gerencia uma fila de 
   atendimento de pacientes em um consultorio. */

#define TAMANHO_FILA 5 //CONSTANTE

//Estrutura Paciente
typedef struct{
	int id;
	char nome[50];
}Paciente;

//EstruturaFila
typedef struct{
	Paciente itens[TAMANHO_FILA];//Vetor de pacientes
	int total;		//Total de pacientes na fila
	int fim;		//Posição do ultimo item
	int inicio;		//Posição do primeiro item
}Fila;

//1. Inicializar a fila
void inicializaFila(Fila *fila){
	fila->inicio = 0;
	fila->fim = 0;
	fila->total = 0;
}

//2. Verificar se a fila esta VAZIA, 
//   retornar 1 caso verdadeiro
int filaVazia(Fila *fila){
	if(fila->total == 0){
		return 1;//Retorna 'TRUE' ou 1 em C
	}else{
		return 0;//Retorna 'FALSE' ou 0 em C
	}
}

//3. Verificar se a fila esta CHEIA, 
//   retornar 1 caso verdadeiro
int filaCheia(Fila *fila){
	return fila->total == TAMANHO_FILA;
}

//4. Inserir pacientes na fila
void inserirPaciente(Fila *fila, Paciente paciente){
	if(filaCheia(fila) == 1){
		printf("A fila esta CHEIA. Volte mais tarde.");
		return;
	}
	
	//Insere o paciente no final da fila
	fila->itens[fila->fim] = paciente;
	
	
	//A fila anda	
	fila->fim = (fila->fim + 1) % TAMANHO_FILA;
	fila->total++;
	
	printf("Paciente %s adicionado!\n", paciente.nome);
}

//5. Remover paciente na fila
Paciente retirarDaFila(Fila *fila){
	if(filaVazia(fila) == 1){
		printf("Fila VAZIA!");
		Paciente pacienteVazio = {-1, "VAZIO"};
		return pacienteVazio;
	}
	//Pega o paciente do inicio da fila
	Paciente proximoPaciente = fila->itens[fila->inicio];
	
	//A fila anda
	fila->inicio = (fila->inicio + 1) % TAMANHO_FILA;
	fila->total--;	
	return proximoPaciente;
}

//6. Exibe a fila
void exibirFila(Fila *fila){
	if(filaVazia(fila) == 1){
		printf("Fila vazia!");
		return;
	}
	
	printf("\nFila: ");
	int i = fila->inicio;
	int contador = 0;
	
	while(contador < fila->total){
		printf("[Id: %d, Nome: %s] ", fila->itens[i].id,
									  fila->itens[i].nome);
		i = (i + 1) % TAMANHO_FILA;
		contador++;									  
	}
	printf("\n");
}


int main(){
	Fila filaConsultorio;
	Paciente proximo;
	inicializaFila(&filaConsultorio);
	
	Paciente p1 = {1, "Joao"};
	Paciente p2 = {2, "Harry"};
	Paciente p3 = {3, "Gabi"};
	Paciente p4 = {4, "Ana"};
	Paciente p5 = {5, "mara"};
	Paciente p6 = {6, "Ze"};
	Paciente p7 = {7, "juca"};
	
	inserirPaciente(&filaConsultorio, p1);
	inserirPaciente(&filaConsultorio, p2);
	inserirPaciente(&filaConsultorio, p3);
	exibirFila(&filaConsultorio);
	
	proximo = retirarDaFila(&filaConsultorio);
	
	printf("\nProximo da fila: [%d] %s\n",
								proximo.id, proximo.nome);
										
	exibirFila(&filaConsultorio);
	
	inserirPaciente(&filaConsultorio, p4);
	inserirPaciente(&filaConsultorio, p5);
	inserirPaciente(&filaConsultorio, p6);
	inserirPaciente(&filaConsultorio, p7);
	exibirFila(&filaConsultorio);	
}
