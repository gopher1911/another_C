#include <stdio.h>

int suma(int n){
	if(n != 0){
		return n + suma(n - 1);
	}else{
		return n;
	}
}

int main(){
	int num;
	printf("podaj liczbe calkowita : ");
	scanf("%d", &num);
	printf("Suma : %d\n", suma(num));

	return 0;
}
