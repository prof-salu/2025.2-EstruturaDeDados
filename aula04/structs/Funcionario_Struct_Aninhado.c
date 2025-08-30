#include <stdio.h>
//Endereco(logradouro, numero, bairro)
//Funcionario (matricula, nome, salario, Endereco)

typedef struct{
	char logradouro[100];
	int numero;
	char bairro[100];
}Endereco;

typedef struct{
	int matricula;
	char nome[100];
	float salario;
	Endereco endereco;	
}Funcionario;

int main(){
	Funcionario f1 = {1001, "Juca", 5500, 
								{"Rua ABC", 12, "Centro"}};
	Funcionario f2;
	
	printf("Informe a matricula: ");
	scanf("%d", &f2.matricula);
	printf("Informe o nome: ");
	scanf(" %[^\n]", &f2.nome);
	printf("Informe o salario: ");
	scanf("%f", &f2.salario);
	
	printf("Informe o logradouro: ");
	scanf(" %[^\n]", &f2.endereco.logradouro);
	
	printf("Informe o numero: ");
	scanf("%d", &f2.endereco.numero);
	
	printf("Informe o bairro: ");
	scanf(" %[^\n]", &f2.endereco.bairro);
	
	printf("\n---Funcionario cadastrado---");
	printf("\nNome: %s", f2.nome);
	printf("\nLogradouro: %s", f2.endereco.logradouro);
}
