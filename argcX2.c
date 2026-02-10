#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int length;
 	//int x = sizeof(argv) / sizeof(argv[0]);
//	int x = argc;

	if(argc == 2){
		printf("lets go... \n");
		length = strlen(argv[1]);
		if(length > 5){
			printf("CORRECT\n");
			for(int i=0; i<length; i++){
				printf("tablica[%d][%d] wartosc ::: %c\n", argc - 1, i, argv[1][i]);
			}
		}else{
			printf("ERROR\n");
		}
	}else{
		printf("BAD we need second parameter\n");
	}

	return 0;
}
