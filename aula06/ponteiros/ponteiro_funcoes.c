#include <stdio.h>

void somar(int x, int y, int *z){
	*z = x + y;
	//printf("Z: %p\n", z);
}


int main(){
	int x = 5, y = 7, z = 0;
	
	
	somar(x,y,&z);
	
	printf("X: %d\n", x);
	printf("Y: %d\n", y);
	printf("Z: %d\n", z);
}
