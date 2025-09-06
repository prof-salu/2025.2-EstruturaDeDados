#include <stdio.h>

typedef struct{
	char marca[50];
	char modelo[50];
	int ano;
}Veiculo;

int main(){
	Veiculo meuVeiculo;
	
	printf("Informe a marca: ");
	scanf("%s", &meuVeiculo.marca);
	
	printf("Informe o modelo: ");
	scanf("%s", &meuVeiculo.modelo);
	
	printf("Informe o ano: ");
	scanf("%d", &meuVeiculo.ano);
	
	printf("**Cadastro Realizado**");
	printf("\nModelo: %s", meuVeiculo.modelo);
	printf("\nMarca: %s", meuVeiculo.marca);
	printf("\nAno: %d", meuVeiculo.ano);
}
