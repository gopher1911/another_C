#include <stdio.h>
#include <string.h>

int main(){
	char a[20]="gg";
	char b[20]="qwerty";

	strcat(a,b);

	puts(a);
	puts(b);

	return 0;
}
