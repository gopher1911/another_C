#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int lengtha, lengthb;

	printf("The name of program is ::: %s\n", argv[0]);

	if(argc == 3){
		lengtha = strlen(argv[1]);
		lengthb = strlen(argv[2]);

		for(int i=0; i<lengtha; i++){
			printf("tabela[1][%d] element ::: %c\n", i, argv[1][i]);
		}
		for(int i=0; i<lengthb; i++){
			printf("tablica[2][%d] element ::: %c\n", i, argv[2][i]);
		}
	}else{
		printf("You have to have 3 arguments\n");
		exit(-1);
	}

	return 0;
}
