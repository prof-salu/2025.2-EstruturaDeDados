#include <stdio.h>

typedef struct{
	char nome[50];
	char telefone[12];
	char email[50];
}Contato;

int main(){
	Contato lista[5];
	int opcao, i;
	int totalContatos = 0;
	printf("Agenda telefonica: \n");
	
	do{
		printf("Escolha uma das opcoes abaixo: \n");
		printf("1- Adicionar contato\n");
		printf("2- Listar contatos\n");
		printf("3- Sair\n");
		printf("Opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				if(totalContatos < 5){
					//Adicionar
					printf("Informe o nome: ");
					scanf("%s", &lista[totalContatos].nome);
					printf("Informe o e-mail: ");
					scanf("%s", &lista[totalContatos].email);
					printf("Informe o telefone: ");
					scanf("%s", &lista[totalContatos].telefone);
					totalContatos++;
				}else{
					printf("\nLista cheia!!!");
				}
				break;
				
			case 2:				
				for(i = 0; i < totalContatos; i++){
					printf("\nNome: %s", lista[i].nome);
					printf("\nE-mail: %s", lista[i].email);
					printf("\nTelefone: %s\n", lista[i].telefone);
				}
				break;
				
			case 3:
				printf("Encerrando o programa...");
				break;
			default:
				printf("opcao invalida");
		}		
	}while(opcao != 3);
}
