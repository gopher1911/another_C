#include <stdio.h>

int main(){
	int liczba;
	FILE *plik;
	plik = fopen("/home/gopher/another_C/pliczek.txt","w");

	printf("Podaj Liczbe : ");
	scanf("%d", &liczba);
	fprintf(plik, "%d", liczba);
	fclose(plik);

	return 0;
}
