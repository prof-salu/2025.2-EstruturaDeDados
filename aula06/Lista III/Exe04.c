#include <stdio.h>

void maiorValor1(int a, int b, int c){
	int maior;
	if(a >= b && a >= c){
		maior = a;
	}else if(b >= a && b >= c){
		maior = b;
	}else{
		maior = c;
	}
	printf("O maior valor e %d.", maior);
}

int maiorValor2(int a, int b, int c){
	int maior;
	if(a >= b && a >= c){
		maior = a;
	}else if(b >= a && b >= c){
		maior = b;
	}else{
		maior = c;
	}
	return maior;
}


int main(){
	int x = 10, y = 37, z = 20;
	
	int maior_numero = maiorValor2(x, y, z);
	
	printf("\nO maior valor ao quadrado e %d.", maior_numero * maior_numero);
	
	//printf("\nO maior valor e %d.", maiorValor2(x, y, z));
	
	//Imprimir o maior valor dentre os 3 e elevá-lo ao quadrado
}
