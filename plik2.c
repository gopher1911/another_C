#include <stdio.h>
#include <stdlib.h>

int main(){
	int liczba;
	FILE *plik;
	
	if((plik = fopen("/home/gopher/another_C/pliczek.txt", "r"))==NULL){
		printf("Blad oprzy otwarciu pliku");
		exit(1);
	}

	fscanf(plik, "%d", &liczba);

	printf("Wartosc odczytana z pliku %d\n", liczba);
	fclose(plik);

	
	return 0;
}
