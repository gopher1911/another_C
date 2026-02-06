#include <stdio.h>

int function(){
	int a, b, suma;
	printf("Podaj dwie liczby :\n");
	scanf("%d %d", &a, &b);
	suma = a + b;
	return suma;
}

int main(){
	int x;
	x = function();
	printf("Suma a + b = %d\n",  x);

	return 0;
}
