/* jesli enum nie ma przypisanej wartosci to zaczyna od 0 i zwieksza o jeden zawsze,
   jesli ma wartosc przypisana gdzie np. -2 to kolejne wartosci bedzie zwieksza o jeden 
   czyli beda to -1, 0, 1 ...etc */
#include <stdio.h>

int main(){
    enum num {t,u,v,w,x,y,z};

    printf("podaj wartosc enum 1 : %d\n", t);
    printf("podaj wartosc enum 3 : %d\n", x);


    return 0;
}
