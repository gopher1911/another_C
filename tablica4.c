#include <stdio.h>

int main(){
	int macierz[2][10]={
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10}
	};
	int a = sizeof(macierz) / sizeof(macierz[0]);
	int b = sizeof(macierz[0]) / sizeof(macierz[0][0]);

	for(int x=0; x < a; x++){
	
		for(int y=0; y < b; y++){
			printf("macierz [%d][%d] :::\n", x, y);
		}
	}

	return 0;
}
	
