#include <stdio.h>

struct liczba{
	int liczba;
} l1;

int main(){
	l1.liczba = 5;
	printf(" liczba ::: %d\n", l1.liczba);

	return 0;
}
