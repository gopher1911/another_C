#include <stdio.h>

int suma(int a, int b){
	int c=0;
	c = a + b;
	return c;
}

int main(){
	int a=2, b=7, c=0;

	c = suma(a, b);
	printf("Suma liczb : %d\n", c);

	return 0;
}
