#include <stdio.h>

typedef struct{
	int id;
	char nome[50];
	float salario;
}Funcionario;

int main(){
	Funcionario empresa[5];
	int i, indice;
		
	for(i = 0; i < 5; i++){
		printf("Informe o ID: ");
		scanf("%d", &empresa[i].id);
		
		printf("Informe o nome: ");
		scanf("%s", &empresa[i].nome);
		
		printf("Informe o salario: ");
		scanf("%f", &empresa[i].salario);
		
		if(i == 0){
			indice = i;
		}
		
		if(empresa[i].salario > empresa[indice].salario){
			indice = i;
		}
	}
	
	printf("\nMaior salario: %f", empresa[indice].salario);
	printf("\nNome: %s", empresa[indice].nome);
	
}
