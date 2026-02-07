#include <stdio.h>

int main(){
	int tablica1[5] = {5,4,9,3,0};
 	int x = sizeof(tablica1) / sizeof(tablica1[0]);
	int suma=0, v=0;

	for(int a=0; a < x; a++){
		v = tablica1[a];
		suma = suma + v;
	}

	printf(" Suma wartosci w tablicy wynosi ::: %d\n", suma);

	return 0;
}
