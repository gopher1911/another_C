#include <stdio.h>

int main(){
	char imie[20];
	char nazwisko[30];
	int wiek, i, liczba;
	FILE *plik;

	printf("Podaj liczbe uczniow :");
	scanf("%d", &liczba);

	if((plik = fopen("/home/gopher/another_C/wykaz_uczniow.txt", "w"))==NULL){
		printf("blad otwarcia");
	}

	for(i=0; i<liczba;i++){
		printf("Dla ucznia %d\nPodaj Imie : ", i+1);
		scanf("%s", imie);
		printf("Podaj nazwisko : ");
		scanf("%s", nazwisko);
		printf("Podaj wiek ucznia :");
		scanf("%d", &wiek);

		fprintf(plik, "\nImie: %s \nNazwisko: %s \nWiek: %d \n", imie, nazwisko, wiek);
	}
	
	fclose(plik);

	return 0;
}
