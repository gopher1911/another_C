/* Warunek sprawdzany jest przed wykonaniem bloku kodu
Jeśli warunek jest fałszywy od początku, kod w pętli nie wykona się ani razu
Używana gdy nie wiesz z góry, czy pętla powinna się w ogóle wykona */

#include <stdio.h>

int main(){
	int a=1;

	while(a<=10){
		printf("%d\n", a);
		a++;
	}
	
	return 0;
}
