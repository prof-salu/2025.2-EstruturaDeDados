#include <stdio.h>

float celsiusParaFarenheit(float celsius){
	float fahrenheit = (celsius * 1.8) + 32;
	return fahrenheit;
}

float farenheitParaCelsius(float fareheint){
	float celsius = ((fareheint - 32) * 5) / 9;
	return celsius;
}

int main(){
	int opcao = 0;
	float valor;
	
	do{
		printf("Escolha uma formula abaixo:\n");
		printf("1- Celsius para Farenheit\n");
		printf("2- Farenheit para Celsius\n");
		printf("0- Sair\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Informe a temperatura em graus celsius: ");
				scanf("%f", &valor);
				printf("Valor em Farenheit: %.2f\n", celsiusParaFarenheit(valor));
				break;
			case 2:
				printf("Informe a temperatura em graus farenheit: ");
				scanf("%f", &valor);
				printf("Valor em Celsius: %.2f\n", farenheitParaCelsius(valor));
				break;
			case 0:
				printf("Encerrando o programa...\n");
				break;
		}
	}while(opcao != 0);
}
