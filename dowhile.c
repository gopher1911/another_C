/* Warunek sprawdzany jest po wykonaniu bloku kodu
Kod w pętli wykona się zawsze przynajmniej raz, niezależnie od warunku
Używana gdy chcesz zagwarantować przynajmniej jedno wykonanie */


#include <stdio.h>

int main(){
	int a=1;

	do{
		printf("%d\n", a);
		a++;
	}while(a<=10);

	return 0;
}
