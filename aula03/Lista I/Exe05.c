#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	/*5. Faça um Programa que verifique se uma letra 
	digitada é vogal ou consoante.*/
	
	char letra, letra_maiuscula;
	
	printf("Informe a letra: ");
	scanf("%c", &letra);
	
	letra_maiuscula = toupper(letra);
	
	if(    letra_maiuscula == 'A' 
		|| letra_maiuscula == 'E' 
		|| letra_maiuscula == 'I' 
		|| letra_maiuscula == 'O' 
	 	|| letra_maiuscula == 'U'){
	 		
		printf("A letra \"%c\" é uma VOGAL", letra);
	}else{
		printf("A letra \"%c\" é uma CONSOANTE", letra);
	}
}
