#include <stdio.h>
#include <string.h>

int main(){
	char a[]="adam", b[]="adAm", c[]="adam";
	int wynik;

	wynik = strcmp(a, b);
	printf("Wynik1 ::: %d\n", wynik);

	wynik = strcmp(a, c);
	printf("Wynik2 ::: %d\n", wynik);

	return 0;
}
