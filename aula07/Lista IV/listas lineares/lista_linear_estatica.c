#include <stdio.h>

#define MAX 11

typedef struct{
	int elementos[MAX];
	int tamanho;
}ListaEstatica;

void inicializaLista(ListaEstatica *lista){
	lista->tamanho = 0;
}

int insereDado(ListaEstatica *lista, int valor){
	if(lista->tamanho < MAX){
		lista->elementos[lista->tamanho] = valor;
		lista->tamanho++;
		return 1;//sucesso, inseriu o valor
	}
	printf("Lista cheia!!!\n");
	return 0;//falha, extrapolou o tamanho
}

void exibeDados(ListaEstatica *lista){
	int i;
	printf("Elementos da lista estatica: ");
	for(i = 0; i < lista->tamanho; i++){
		printf("%d ", lista->elementos[i]);
	}
	printf("\n");
}

int main(){
	//Vantagens:
		//Acesso rapido aos dados
		//Simplicidade
	//Desvantagens: 
		//tamanho fixo
	
	ListaEstatica listaNumeros;
	
	inicializaLista(&listaNumeros);
	
	insereDado(&listaNumeros, 5);
	insereDado(&listaNumeros, 7);
	insereDado(&listaNumeros, 4);
	insereDado(&listaNumeros, 3);
	insereDado(&listaNumeros, 8);
	insereDado(&listaNumeros, 10);
	insereDado(&listaNumeros, 33);
	insereDado(&listaNumeros, 9);
	insereDado(&listaNumeros, 19);
	insereDado(&listaNumeros, 29);
	insereDado(&listaNumeros, 39);
	insereDado(&listaNumeros, 49);
	insereDado(&listaNumeros, 59);
	
	exibeDados(&listaNumeros);
}
