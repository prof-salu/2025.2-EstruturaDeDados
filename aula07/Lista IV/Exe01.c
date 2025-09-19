#include <stdio.h>

int contaCaracteres(char *palavra){
	int contador = 0;	
	while(*palavra != '\0'){//O char '\0' indica o final da string
		//Incrementa o valor do contador
		contador++;
		//Move o ponteiro para a proxima posição
		palavra++;
	}
	return contador;
}

int main(){
	char minhaString[] = "Aula de estrutura de dados";	
	int tamanho = contaCaracteres(&minhaString);
	printf("Total de caracteres: %d", tamanho);
}
