#include <stdio.h>

int main(){

	char a[]="abcd";
	char b[5]="abcd";
	char c[]={'a','b','c','d','\0'};
	char d[5]={'a','b','c','d','\0'};

	printf("ciag 1 : %s\n", a);
	printf("ciag 2 : %s\n", b);
	printf("ciag 3 : %s\n", c);
	printf("ciag 4 : %s\n", d);

	return 0;
}
