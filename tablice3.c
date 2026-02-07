#include <stdio.h>

int main(){
	int tablica1[5]={1,2,3,4,5};
	
	for(int x=0; x <=10; x++){
		printf("wartosc o indeksie %d  tablicy : %d\n", x, tablica1[x]);
	}

	for(int y=0; y <= sizeof(tablica1[y]); y++){
		printf("wartosc o indexie %d tablicy : %d\n", y, tablica1[y]);
	}

	return 0;
}
