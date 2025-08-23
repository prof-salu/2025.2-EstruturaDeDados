#include <stdio.h>

int main(){
	/*3. Faça um Programa que peça a temperatura em graus 
	Fahrenheit, transforme e mostre a temperatura em graus 
	Celsius. C = (5 * (F-32) / 9).
	*/
	
	float fahrenreit, celsius;
	
	printf("Informe o valor em FAHRENREIT: ");
	scanf("%f", &fahrenreit);
	
	celsius = (5 * (fahrenreit - 32) / 9);
	
	printf("Valor em Celsius: %.2f", celsius);
}
