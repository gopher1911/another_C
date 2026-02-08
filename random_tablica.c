#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int tablica[5];
	int a = sizeof(tablica) / sizeof(tablica[0]);
	int x;
	srand(time(NULL));

	printf("Wylosowane pseudoliczby : \n");

	for(int i=0; i < a; i++){
		x = rand()%10;
		tablica[i] = x;
		printf("%d ::: \n", x);
	}

	printf("\nLiczby wpisane do tablicy : ");

	for(int i=0; i< a; i++){
		printf("%d :: ",tablica[i]);
	}

	printf("\n");


	return 0;
}
