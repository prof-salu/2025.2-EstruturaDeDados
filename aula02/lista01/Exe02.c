#include <stdio.h>

int main(){
	
	/*Faça um Programa que pergunte quanto você ganha por hora e o 
	número de horas trabalhadas no mês. Calcule e mostre o total do seu 
	salário no referido mês.*/
	
	float ganhoHora, horasTrabalhadas, salarioMes;
	
	printf("Informe o valor da hora: ");
	scanf("%f", &ganhoHora);
	
	printf("Informe o total de horas trabalhadas: ");
	scanf("%f", &horasTrabalhadas);
	
	salarioMes = ganhoHora * horasTrabalhadas;
	
	printf("Salario do mes: %.2f", salarioMes);
}
