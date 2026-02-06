#include <stdio.h>

int main(){
	int *ptr, r;
	r=22;

 	printf("address r : %p\n", &r);
	printf("wartosc r : %d\n", r);

	ptr = &r;
	printf("address wskaznika ptr : %p\n", ptr);
	printf("zawartosc wskaznika ptr : %d\n", *ptr);

 	r = 11;
	printf("address wskaznika r : %p\n", ptr);
	printf("zawartosc wskaznika r; %d\n", *ptr);

	*ptr = 2;
	printf("address r; %p\n", &r);
	printf("wartosc r: %d\n", r);

	return 0;
}
