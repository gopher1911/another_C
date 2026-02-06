#include <stdio.h>

float pole_kola(float r){
	float pi=3.14, pole=0;
	pole = pi * (r * r);

	return pole;
}

int main(){
	float x;
	x = pole_kola(6);
	printf("Pole kola wynosi : %.2f\n", x);

	return 0;
}
