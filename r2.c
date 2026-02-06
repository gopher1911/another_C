#include <stdio.h>

int max(int l1, int l2){
	int wynik;
	if(l1 > l2){
		wynik = l1;
	}else{
		wynik = l2;
	}
	return wynik;
}

int main(){
	int a=100, b=200, c;

	c = max(a, b);
	printf("wieksza liczba z podanych to : %d\n", c);

	return 0;
}

