#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[50] = {0};
    int i=0;
    int szam=999;    ///valtozo
    int *p;         ///pointer
    int szum=0;

    p=&szam;        ///pointer megkapja a valtoz� c�m�t

    for (i=0;i<50;)
    {
        tomb[i]=*p; ///t�mb eleme megkapja a sz�m �rt�k�t pointeren kereszt�l
        if((*p)%2){
            szum=szum+*p;
        }
        printf("Szam%d:%d\n",i,*p);
        i++;
        *p=*p-1; ///sz�m v�ltoz� �rt�k�t cs�kkented pointeren kereszt�l

    }
    printf("SZUMMAAAA:%d",szum);

    return 0;
}
