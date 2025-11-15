#include <stdio.h>
#include <stdlib.h>
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
//Começa na raiz --> vai pra esquerda --> vai pra direita
//Ideal para exibir estruturas hierarquicas
void preOrdem(No *raiz){
	if(raiz == NULL){
		return;
	}
	printf("%d ", raiz->valor); //Acessa a raiz
	preOrdem(raiz->esquerda);  //Mergulha na esquerda
	preOrdem(raiz->direita);   //Mergulha na direita
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

//Vai pra esquerda --> vai pra direita --> visita a raiz
//Ideal para apagar arquivos. Voce nao pode apagar o pai antes dos filhos
void posOrdem(No *raiz){
	if(raiz == NULL){
		return;
	}
	posOrdem(raiz->esquerda);
	posOrdem(raiz->direita);
	printf("%d ", raiz->valor);
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

int main(){
	No *raiz = criarNo(7);
	raiz->esquerda = criarNo(5);
	raiz->direita = criarNo(10);
	raiz->esquerda->esquerda = criarNo(13);
	raiz->esquerda->direita = criarNo(8);
	raiz->direita->esquerda = criarNo(-12);

	//Testando os percusos
	//Pre-ordem
	printf("Pre-ordem: ");
	preOrdem(raiz);
	printf("\n");
	
	//Em-ordem
	printf("Em-ordem: ");
	emOrdem(raiz);
	printf("\n");
	
}
