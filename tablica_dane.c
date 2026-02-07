#include <stdio.h>

int main(){
	int tablica[4];
	int a;
        a = sizeof(tablica) / sizeof(tablica[0]);
	
	printf("Podaj 4 liczby do tablicy : \n");
	
	for(int x=0; x < 4; x++){
		scanf("%d", &tablica[x]);
	}

	for(int x=0; x < a; x++){
		printf("Podane liczby to : %d\n", tablica[x]);
	}

	return 0;
}
