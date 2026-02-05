#include <stdio.h>

struct liczba{
	int liczba;
};

int main(){
	struct liczba l1;
	l1.liczba = 5;
	printf("liczba ::: %d\n", l1.liczba);

	return 0;
}
