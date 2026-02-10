#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int length;

	if(argc == 2){
		printf("lets go... \n");
		length = strlen(argv[1]);
		if(length > 5){
			printf("CORRECT\n");
		}else{
			printf("ERROR\n");
		}
	}else{
		printf("BAD we need second parameter\n");
	}

	return 0;
}
