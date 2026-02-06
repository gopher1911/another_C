#include <stdio.h>

union uimie{
	char imie[20];
	int wiek;
	char nazwisko[20];
}u1;

struct simie{
	char imie[20];
	int wiek;
	char nazwisko[20];
}s1;

int main(){
	printf("Union ::: %lu bajtow\n", sizeof(u1));
	printf("Struct ::: %lu bajtow\n", sizeof(s1));

	return 0;
}
