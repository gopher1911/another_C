#include <stdio.h>
#include <string.h>

int main(){
	char imie[10];
	printf("Podaj imie : ");
	fgets(imie, sizeof(imie), stdin);
	printf("Twoje imie to : ");
	puts(imie);

	return 0;
}
