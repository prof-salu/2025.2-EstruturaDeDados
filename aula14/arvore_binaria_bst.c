#include <stdio.h>
#include <stdlib.h>
//BST --> Binary Search Tree
typedef struct No{
	int valor;
	struct No *esquerda;
	struct No *direita;
}No;

No* criarNo(int valor){
	No *novo = (No*)malloc(sizeof(No));
	novo->valor = valor;
	novo->esquerda = NULL;
	novo->direita = NULL;
	return novo;
}

//Vai pra esquerda --> Visita a raiz --> vai para direita
//Em BST imprime os dados de forma ordenada
void emOrdem(No *raiz){
	if(raiz == NULL){
		return;
	}	
	emOrdem(raiz->esquerda);
	printf("%d ", raiz->valor);
	emOrdem(raiz->direita);
}

//Liberar os dados da arvore para evitar vazamento de memoria
void liberarArvore(No *raiz){
	if(raiz == NULL){
		return;
	}
	liberarArvore(raiz->esquerda);
	liberarArvore(raiz->direita);
	free(raiz);
}

No* inserir(No *raiz, int valor){
	if(raiz == NULL){
		return criarNo(valor);
	}
	
	//Decisão de roteamento
	if(valor < raiz->valor){
		raiz->esquerda = inserir(raiz->esquerda, valor);
	}else if(valor > raiz->valor){
		raiz->direita = inserir(raiz->direita, valor);
	}
	
	return raiz;
}

int busca(No* raiz, int valorBuscado){
	if(raiz == NULL){
		return 0;
	}
	
	if(raiz->valor == valorBuscado){
		return 1;
	}
	
	if(valorBuscado < raiz->valor){
		return busca(raiz->esquerda, valorBuscado);
	}else{
		return busca(raiz->direita, valorBuscado);
	}
}

int main(){
	//Na arvore BST a raiz sempre começa NULA
	No *raiz = NULL;
	raiz = inserir(raiz,  7);
	raiz = inserir(raiz,  5);
	raiz = inserir(raiz,  13);
	raiz = inserir(raiz,  8);
	raiz = inserir(raiz,  -12);
	raiz = inserir(raiz,  10);
	raiz = inserir(raiz,  1);
	//raiz = inserir(raiz,  0);

	printf("Exibicao em-ordem: ");
	emOrdem(raiz);
	printf("\n");
	
	int buscaValor1 = -12;
	int buscaValor2 = 1;
	int buscaValor3 = 0;
	
	printf("Buscando: %s\n", busca(raiz, buscaValor1)
								? "Valor encontrado" : "Nao encontrado");
	printf("Buscando: %s\n", busca(raiz, buscaValor2)
								? "Valor encontrado" : "Nao encontrado");
	printf("Buscando: %s\n", busca(raiz, buscaValor3)
								? "Valor encontrado" : "Nao encontrado");
	
}
