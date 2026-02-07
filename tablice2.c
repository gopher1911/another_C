#include <stdio.h>

int main(){
	int t1[10];
	int t2[5]={1,2,3,4,5};
	int t3[]={2,4,6,8,10};

	printf("wartosc o indeksie 0 tablica2 : %d\n", t2[0]);
	printf("wartosc o indeksie 1 tablica2 : %d\n", t2[1]);

	printf("wartosc o indeksie 0  w tablicy 3 : %d\n", t3[0]);

	t1[0]=5;
	t1[3]=3;
	t2[0]=8;

	printf("wartosc o index 0 w tablicy numer 1 : %d\n", t1[0]);
	printf("wartosc o index 3 z tablicy numer 1 : %d\n", t1[3]);
	printf("wartosc o index 1 z tablicy numer 1 : %d\n", t1[2]);

	printf("wartosc o index 2 z tablicy numer 3 : %d\n", t3[2]);

	return 0;
}
