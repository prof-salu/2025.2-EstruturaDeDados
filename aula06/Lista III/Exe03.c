#include <stdio.h>

void tabuada(int numero){
	int i;
	printf("**Tabuada do %d**\n", numero);
	for(i = 1; i <= 10; i++){
		int resultado = numero * i;
		printf("%02d X %02d = %02d\n", numero, i, resultado);
	}
}

int main(){
	int numero;	
	printf("Informe o valor para a tabuada: ");
	scanf("%d", &numero);
	tabuada(numero);
}
