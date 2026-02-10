#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[]){
	int wiek = atoi(argv[1]);
	char *status = (wiek >= 18) ? "dorosly" : "dziecko";

	printf("%s\n", status);
		
	return 0;
}
