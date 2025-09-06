#include <stdio.h>

void parOuImpar(int valor){
	if(valor % 2 == 0){
		printf("Valor PAR");
	}else{
		printf("Valor IMPAR");
	}
}

int main(){
	int numero;
	
	printf("Informe um valor: ");
	scanf("%d", &numero);
	
	parOuImpar(numero);
}
