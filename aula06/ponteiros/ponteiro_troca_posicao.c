#include <stdio.h>

	//Crie uma função que receba dois valores inteiros e troca
	//os valores de posicao
	
	//Exemplo
	//X = 5 e Y = 10;
	//Apos a troca
	//X = 10 e Y = 5

void trocaValores(int* x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){

	int x = 5, y = 10;
	
	printf("Antes da troca --> X: %d e Y: %d\n", x, y);
	trocaValores(&x, &y);
	printf("Depois da troca --> X: %d e Y: %d", x, y);	
}
