#include <stdio.h>

int main(){
	/*8. Crie um programa que tenha uma fun��o fatorial(),
	 que receba um par�metro inteiro e retorne o valor do 
	 fatorial desse n�mero.*/
	 
	 //!5 ==> 5 * 4 * 3 * 2 * 1
	 //!7 ==> 7 * 6 * 5 * 4 * 3 * 2 * 1
	 
	 int valor, fatorial = 1, i;
	 
	 printf("Informe um valor: ");
	 scanf("%d", &valor);
	 
	 for(i = valor; i >= 1; i--){
	 	fatorial *= i;
	 }
	 
	 printf("Fatorial de !%d e igual %d", valor, fatorial);
}
