#include <stdio.h>

int main(){
	int suma=0;

	for(int a=1; a<15; a++){
		suma = suma + a;
		if(a == 7){
			goto przeskok;
		}	
        }
	
	przeskok:
		printf("%d\n", suma);
	return 0;
}
