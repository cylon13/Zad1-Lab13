#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "head.h"

int main()
{
    int ctrl;
    printf("Witaj w grach\n");
    while(1)
    {
        printf("\n");
        printf("Wybierz gre:\n");
        printf("1. Zgadywanie liczby\n");
        printf("2. Kosci\n");
        printf("3. Wyjscie\n");
        scanf("%d", &ctrl);
        printf("\n");
        switch(ctrl)
        {
            case 1: {rand1(); break;}
            case 2: {rand2(); break;}
            case 3: {break;}
            default : {printf("bledna opcja, wpisz 1, 2 lub 3\n"); break;}
        }
        if(ctrl==3) break;
    }
    return 0;
}
