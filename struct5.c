#include <stdio.h>

struct samochod{
	char marka[20];
	char model[30];
	int year;
}cars[2];

int main(){
        printf("Dane samochodow osobowych.\n");

	for(int i=0; i < 2; ++i){
		printf("\nDla auta numer %d\n", i + 1);
		printf("Podaj marke ::: ");
		scanf("%s", cars[i].marka);
		printf("Podaj model ::: ");
		scanf("%s", cars[i].model);
		printf("Podaj rocznik ::: ");
		scanf("%d", &cars[i].year);

	}	

	for(int i=0; i<2; ++i){
		printf("\nDla Auta o ID ::: %d\n", i + 1);
		printf("Marka ::: %s\n", cars[i].marka);
		printf("Model ::: %s\n", cars[i].model);
		printf("Rocznik ::: %d\n", cars[i].year);
	}
	
	return 0;
}
