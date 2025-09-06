#include <stdio.h>

typedef struct{
	float largura;
	float altura;
}Retangulo;

int main(){
	Retangulo ret;
	
	printf("Informe a largura: ");
	scanf("%f", &ret.largura);
	
	printf("Informe a altura: ");
	scanf("%f", &ret.altura);
	
	float area = ret.altura * ret.largura;
	float perimetro = (ret.altura * 2) + (ret.largura * 2);
	
	printf("\nArea: %.2f", area);
	printf("\nPerimetro: %.2f", perimetro);
}
