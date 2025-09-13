#include <stdio.h>

float somar(float a, float b){
	return a + b;
}

float subtrair(float a, float b){
	return a - b;
}

float multiplicar(float a, float b){
	return a * b;
}

float dividir(float a, float b){
	return a / b;
}


int main(){
	printf("***Calculadora C***\n");
	float val1, val2;
	int opcao = 0;
	
	do{
		printf("Escolha uma opcao: \n");
		printf("1- Somar\n");
		printf("2- Subtrair\n");
		printf("3- Multiplicar\n");
		printf("4- Dividir\n");
		printf("0- Sair\n");
		
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Informe o valor 1: ");
				scanf("%f", &val1);
				
				printf("Informe o valor 2: ");
				scanf("%f", &val2);
				
				printf("Soma: %.2f\n", somar(val1, val2));
				break;
			case 2:
				printf("Informe o valor 1: ");
				scanf("%f", &val1);
				
				printf("Informe o valor 2: ");
				scanf("%f", &val2);
				
				printf("Subtracao: %.2f\n", subtrair(val1, val2));
				break;
			case 3:
				printf("Informe o valor 1: ");
				scanf("%f", &val1);
				
				printf("Informe o valor 2: ");
				scanf("%f", &val2);
				
				printf("Multiplicacao: %.2f\n", multiplicar(val1, val2));
				break;
			case 4:
				printf("Informe o valor 1: ");
				scanf("%f", &val1);
				
				printf("Informe o valor 2: ");
				scanf("%f", &val2);
				
				printf("Divisao: %.2f\n", dividir(val1, val2));
				break;
			case 0:
				printf("Encerrando a calculadora...");
				break;
			default:
				printf("opcao invalida");
				break;
		}
	}while(opcao != 0);
}
