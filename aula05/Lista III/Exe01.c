#include <stdio.h>

//declaração
float calculaAreaRetangulo(float largura, float altura){
	return largura * altura;
}

int main(){
	float largura = 10;
	float altura = 6;
	
	float area = calculaAreaRetangulo(5, 8);
	
	//chamada
	printf("Area: %f", calculaAreaRetangulo(largura, altura));
	printf("\nArea: %f", area);
}
