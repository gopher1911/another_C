#include <stdio.h>
#include <string.h>

struct uczen{
	char imie[20];
	char nazwisko[30];
	int wiek;
};

int main(){
	struct uczen u1;
	strcpy(u1.imie, "Jan");
	strcpy(u1.nazwisko, "Kowalski");
	u1.wiek = 16;

	printf("Imie ucznia: %s\n", u1.imie);
	printf("Nazwisko ucznia %s\n", u1.nazwisko);
	printf(" wiek ucznia :: %d\n", u1.wiek);

	return 0;
}
