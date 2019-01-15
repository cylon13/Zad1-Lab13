#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "head.h"

void rand1()
{
    int x,y,n=0;
    int tmp = 0;
    srand(time(0));
    x=1+rand()%1000000;
    printf("komputer wylosowal liczbe z zakresu 1 do 1 000 000\n");
    while(n<10)
    {
        printf("Odgadnij wylosowana liczbe\n");
        scanf(" %d", &y);
        if(x>y) printf("Liczba ktora podales jest mniejsza od wylosowanej liczby\n");
        if(x<y) printf("Liczba ktora podales jest wieksza od wylosowanej liczby\n");
        if(x==y) {printf("Brawo!! Odgadles!!\n"); break; tmp = 336;}
        n++;
    }
    if(tmp==0) printf("Przegrana :( wlasciwa liczba to: %d\n", x);
}
