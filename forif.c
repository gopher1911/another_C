#include <stdio.h>

int main(){
	float suma, liczba;

	for(int a=0; a<6; a++){
		printf("podaj 6 liczb ::: %d ::: ", a);
                scanf("%f", &liczba);

		if(liczba < 0){
			printf("liczba musi byc dodatnia\n");
 			break;
		}	
	       
		suma = suma + liczba;
	}
	
	printf("suma liczba ::: %.2f\n", suma);

	return 0;
}
