#include <stdio.h>
#include <stdlib.h>

/*void sajatfuggveny()
{
    i = i+j;
}*/

void pointersfgv(int *valami){ ///VALAMI AZ EGY POINTER

    /*printf("Mutatott ertek: %d\n",*valami);
    printf("Pointer erteke: %d\n",valami);*/
    *valami = 20;
}

    PORTB = 0xF0;


int sajatfuggveny2(int x, int y);

int main()
{
    int szam=10;      ///�RT�K
    int *pszam;

    pointersfgv(&szam);
    szam = sajatfuggveny2(szam,szam);

    pszam=&szam;    ///csiollag n�lk�l c�mmel dolgozunk
    *pszam=5;

    printf("Szam:%d\n",szam);
    printf("Memoriacim:%d\n",pszam);  ///c�m
    printf("Szam:%d\n",*pszam);       ///�rt�k

    return 0;
}

int sajatfuggveny2(int x, int y)
{

    x=x+y;
    x++;

    return x;
}
