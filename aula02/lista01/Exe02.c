#include <stdio.h>

int main(){
	
	/*Fa�a um Programa que pergunte quanto voc� ganha por hora e o 
	n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu 
	sal�rio no referido m�s.*/
	
	float ganhoHora, horasTrabalhadas, salarioMes;
	
	printf("Informe o valor da hora: ");
	scanf("%f", &ganhoHora);
	
	printf("Informe o total de horas trabalhadas: ");
	scanf("%f", &horasTrabalhadas);
	
	salarioMes = ganhoHora * horasTrabalhadas;
	
	printf("Salario do mes: %.2f", salarioMes);
}
