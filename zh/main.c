#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[50] = {0};
    int i=0;
    int szam=999;    ///valtozo
    int *p;         ///pointer
    int szum=0;

    p=&szam;        ///pointer megkapja a valtozó címét

    for (i=0;i<50;)
    {
        tomb[i]=*p; ///tömb eleme megkapja a szám értékét pointeren keresztül
        if((*p)%2){
            szum=szum+*p;
        }
        printf("Szam%d:%d\n",i,*p);
        i++;
        *p=*p-1; ///szám változó értékét csökkented pointeren keresztül

    }
    printf("SZUMMAAAA:%d",szum);

    return 0;
}
