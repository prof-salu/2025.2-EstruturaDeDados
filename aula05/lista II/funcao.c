#include <stdio.h>

//assinatura de uma fun��o
	//retorno 
		//void (nao retorna nada)
		//int, float, char, struct ...
	//nome
		//obedece as regras de variaveis
	//parametros (argumentos)

//Cria��o da fun��o
void imprimeMenu(){
	printf("Escolha uma das opcoes abaixo: \n");
	printf("1- Adicionar contato\n");
	printf("2- Listar contatos\n");
	printf("3- Sair\n");
}

void exibeNome(char nome[]){
	printf("Ola %s", nome);
}

int soma(){
	return 2 + 5;
}

float multiplicaValores(float a, float b){
	return a * b;
}

int main(){
	//Procedimentos armazenados
	//stored procedures
	//fun��o
	//m�todos
	//procedimento
	
	//Call (chamada)
	imprimeMenu();	
}
