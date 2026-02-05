#include <stdio.h>

int main(){
	int a;
	float b;
	double c;
	char d;
	printf("Wartosc typu danych int %lu bajtow\n", sizeof(a));
	printf("Wartosc typu danych float %lubajtow\n", sizeof(b));
	printf("Wartosc typu danych double %lubajtow\n", sizeof(c));
	printf("Wartosc typu danych char %lubajtow\n", sizeof(d));

	return 0;
}
