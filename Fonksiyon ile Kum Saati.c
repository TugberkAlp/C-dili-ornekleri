#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ucgen(int);
void tersucgen(int);

int main()
{
    int satirsayisi;
    printf("Lutfen Kum Saatinin Uzunlugunu Giriniz: ");
    scanf("%d",&satirsayisi);
    ucgen(satirsayisi);
    tersucgen(satirsayisi);

    return 0;
}

void tersucgen(int satir)
{
    int bosluksayisi=satir-1;
    for(int i=1; i<=satir; i++)
    {
        for(int j=1; j<=bosluksayisi; j++)
        {
            printf(" ");
        }
        bosluksayisi--;
        for(int j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void ucgen(int satir)
{
    int bosluksayisi=1;
    for(int i=1; i<=satir-1; i++)
    {
        for(int j=1; j<=bosluksayisi; j++)
        {
            printf(" ");
        }
        bosluksayisi++;
        for(int j=1; j<=2*(satir-i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
