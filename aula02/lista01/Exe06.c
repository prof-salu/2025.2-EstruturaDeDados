#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	/*Faça um programa que leia e valide as seguintes 
	informações: 
	• Nome: maior que 3 caracteres; 
	• Idade: entre 0 e 150; 
	• Salário: maior que zero; 
	• Sexo: 'f' ou 'm'; 
	• Estado Civil: 's', 'c', 'v', 'd';
	*/
	
	char nome[100];//string
	int idade;
	float salario;
	char sexo, estadoCivil;
	
	do{
		printf("Informe o nome: ");
		scanf("%s", &nome);
	}while(strlen(nome) <= 3);
	
	do{
		printf("Informe a idade: ");
		scanf("%d", &idade);
	}while(idade < 0 || idade > 150);
	
	while(1){
		printf("Informe o salario: ");
		scanf("%f", & salario);
		
		if(salario > 0){
			break;
		}else{
			printf("Salario invalido, tente novamente.\n");
		}
	}
	
	do{
		printf("Informe o sexo: ");
		scanf(" %c", &sexo);
	}while(tolower(sexo) != 'f' && tolower(sexo) != 'm');

	do{
		printf("Informe o estado civil: ");
		scanf(" %c", &estadoCivil);
	}while( tolower(estadoCivil) != 's' && 
			tolower(estadoCivil) != 'c' &&
			tolower(estadoCivil) != 'd' &&
			tolower(estadoCivil) != 'v');
}
