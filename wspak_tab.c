#include <stdio.h>

int main(){
	int tablica[5] = {5,9,6,7,2};
	int a = sizeof(tablica) / sizeof(tablica[0]);

	for(int x=0; x<a; x++){
		printf("%d :: ", tablica[x]);
	}

	printf("\nA teraz wspak\n");

	for(int x=a-1; x>=0; --x){
		printf("%d :: ", tablica[x]);
	}

	printf("\n");

	return 0;
}
