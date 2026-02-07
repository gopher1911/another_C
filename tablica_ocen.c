#include <stdio.h>

int main(){
	int tablica[5];
	int x = sizeof(tablica) /sizeof(tablica[0]);
	int ocena=0;
	float srednia=0, suma=0;

	printf("Podaj 5 ocen : ");

	for(int i=0; i < x; i++){
		scanf("%d", &ocena);
		tablica[i] = ocena;
	}

	for(int i=0; i<x; i++){
		printf("tabela ::: %d\n", tablica[i]);
	}
	
	for(int i=0; i<x; i++){
		suma = suma + tablica[i];
	}

	printf("suma ocen to ::: %f\n", suma);
	srednia = suma / x;

	printf("srednia ocen to ::: %0.1f\n", srednia);

	return 0;
}
