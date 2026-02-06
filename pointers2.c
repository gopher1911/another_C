#include <stdio.h>

int main(){
	int* ptr, r;

	printf("ptr : %d\n", ptr);
	printf("r : %d\n", r);

	r = 10;
	ptr = &r;

	printf("*ptr : %d\n", *ptr);

	return 0;
}

