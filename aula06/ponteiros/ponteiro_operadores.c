#include <stdio.h>

int main(){
	//Variavel idade
	int idade = 4;
	
	int *ponteiro_idade = &idade;
	
	idade = idade * 3;
	
	*ponteiro_idade = *ponteiro_idade - 10;
	
	printf("Valor da variavel idade: %d\n", idade);
	printf("Posicao da memoria da variavel idade: %p\n", &idade);
	printf("Valor do ponteiro idade: %p\n", ponteiro_idade);
	printf("Valor armazenado pelo ponteiro_idade: %d\n", *ponteiro_idade);
	
	
	
}
