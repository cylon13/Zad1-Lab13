#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "head.h"

void rand2()
{
    srand(time(0));
    int opcja;
    char liczba;
    int pg=0, pc=0, tura=1;
    int k11, k12, k21, k22, s1, s2;
    printf("Gracze (czlowiek i komputer) naprzemian rzucaja dwa razy dwiema kostkami (losowne sa dwie liczby z zakresu od 1 do 6). \n");
    printf("Po pierwszym rzucie gracz probuje zgadnac czy w kolejnym suma oczek bedzie mniejsza, wieksza czy taka sama. \n");
    printf("Jezeli zgadnie otrzymyje punkt. Wygra gracz, ktory jako pierwszy zdobedzie 10 punktow.  \n");
    while(1)
    {
        printf("\n");
        printf("Tura %d\n", tura);
        printf("Punkty gracza: %d; Punkty komputera: %d;\n", pg,pc);
        printf("Twoj pierwszy rzut koscmi w tej turze:  \n");
        k11=1+rand()%6;
        k12=1+rand()%6;
        s1=k11+k12;
        printf("Pierwsza kosc: %d oczek, druga kosc: % d oczek\n", k11, k12);
        printf("Suma oczek: %d\n", k11+k12);
        printf("Jak przewidujesz?\n");
        printf("1. Suma oczek bedzie wieksza w drugim rzucie - wprowadz 1\n");
        printf("2. Suma oczek bedzie mniejsza w drugim rzucie - wprowadz 2\n");
        printf("3. Suma oczek bedzie rowna w drugim rzucie - wprowadz 3\n");
        scanf(" %d", &opcja);
        printf("Twoj drugi rzut koscmi w tej turze:  \n");
        k21=1+rand()%6;
        k22=1+rand()%6;
        s2=k21+k22;
        printf("Pierwsza kosc: %d oczek, druga kosc: % d oczek\n", k21, k22);
        printf("Suma oczek: %d\n", k21+k22);
        switch(opcja)
        {
            case 1:
            {
                if(s2>s1) {printf("Odgadles! Zyskujesz 1 punkt\n"); pg++;}
                else printf("Tym razem zle przewidziales\n");
                break;
            }
            case 2:
            {
                if(s2<s1) {printf("Odgadles! Zyskujesz 1 punkt\n"); pg++;}
                else printf("Tym razem zle przewidziales\n");
                break;
            }
            case 3:
            {
                if(s2==s1) {printf("Odgadles! Zyskujesz 1 punkt\n"); pg++;}
                else printf("Tym razem zle przewidziales\n");
                break;
            }
            default:
            {
                printf("Nieprawidlowo wybrales opcje!! Nie dostajesz punktow w tej turze\n");
                break;
            }
        }
        printf("wprowadz dowolna liczbe by kontynuowac  \n");
        scanf(" %c", &liczba);
        printf("\n");
        printf("Pierwszy rzut komputera koscmi w tej turze:  \n");
        k11=1+rand()%6;
        k12=1+rand()%6;
        s1=k11+k12;
        printf("Pierwsza kosc: %d oczek, druga kosc: % d oczek\n", k11, k12);
        printf("Suma oczek: %d\n", k11+k12);
        printf("Komputer przewiduje:\n");
        if(s1<=6) {printf("Suma oczek bedzie wieksza w drugim rzucie\n"); opcja=1;}
        if(s1==7) {printf("Suma oczek bedzie rowna w drugim rzucie\n"); opcja=3;}
        if(s1>=8) {printf("Suma oczek bedzie mniejsza w drugim rzucie\n"); opcja=2;}
        printf("wprowadz dowolna liczbe by kontynuowac  \n");
        scanf(" %c", &liczba);
        printf("Drugi rzut komputera koscmi w tej turze:  \n");
        k21=1+rand()%6;
        k22=1+rand()%6;
        s2=k21+k22;
        printf("Pierwsza kosc: %d oczek, druga kosc: % d oczek\n", k21, k22);
        printf("Suma oczek: %d\n", k21+k22);
        switch(opcja)
        {
            case 1:
            {
                if(s2>s1) {printf("Odgadl! Zyskuje 1 punkt\n"); pc++;}
                else printf("Tym razem zle przewidzial\n");
                break;
            }
            case 2:
            {
                if(s2<s1) {printf("Odgadl! Zyskuje 1 punkt\n"); pc++;}
                else printf("Tym razem zle przewidzial\n");
                break;
            }
            case 3:
            {
                if(s2==s1) {printf("Odgadl! Zyskuje 1 punkt\n"); pc++;}
                else printf("Tym razem zle przewidzial\n");
                break;
            }
        }
        tura++;
        if(pg==10 || pc==10) break;
        printf("\n");
        printf("wprowadz dowolna liczbe by kontynuowac  \n");
        scanf(" %c", &liczba);
    }
    printf("\n");
    if(pg==pc) printf("REMIS\n");
    else
    {
    if(pg==10) printf("Wygrales!!!\n");
    if(pc==10) printf("Wygral komputer :p\n");
    }
}
