#include <stdio.h>

int main(){
	int tab1[5] = {1,3,5,7,9};
	int w = sizeof(tab1) / sizeof(tab1[0]);

	for(int x=0; x < w; x++){
		printf(" tablica wyglada tak : %d \n", tab1[x]);
	}

	for(int y=0; y < w; y++){
		printf(" tablica wyglada tak teraz po zmianach : %d\n", tab1[y]+1);
	}


	for(int z=0; z < w; z++){
		tab1[z] += 1;
	}


	printf("%d\n", tab1[3]);

	return 0;
}
