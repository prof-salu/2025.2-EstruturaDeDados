#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int *elementos;
	int tamanho;
	int capacidade;
}ListaDinamica;

void inicializaLista(ListaDinamica *lista, 
				 int capacidadeInicial){
	lista->elementos = (int*) malloc(sizeof(int) * 
								capacidadeInicial);
	lista->tamanho = 0;
	lista->capacidade = capacidadeInicial;
}

int insereDado(ListaDinamica *lista, int valor){
	if(lista->tamanho >= lista->capacidade){
		//Lista cheia (no limite == redimensionar)
		lista->capacidade *= 2;//dobra o tamanho da lista
		lista->elementos = (int*) realloc(lista->elementos,
										  sizeof(int) * lista->capacidade);										  
		
		printf("Lista cheia. Capacidade [%d]!!!\n", lista->capacidade);
	}
	
	lista->elementos[lista->tamanho] = valor;
	lista->tamanho++;
	return 1;
}

void exibeDados(ListaDinamica *lista){
	int i;
	printf("Elementos da lista dinamica: ");
	for(i = 0; i < lista->tamanho; i++){
		printf("%d ", lista->elementos[i]);
	}
	printf("\n");
}

int main(){
	//Vantagens
		//Flexibilidade de tamanho
		//Eficiencia na memoria
	//Desvantagens
		//Complexidade
		//Desempenho
	
	ListaDinamica listaNumeros;
	
	inicializaLista(&listaNumeros, 5);
	
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
	
	free(listaNumeros);
	
}
