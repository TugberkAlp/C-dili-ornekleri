#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fibonacci(int tane)
{
    int i;
    int bir=0;
    int iki=1;
    int toplam;
    printf("%d  %d  ",bir,iki);
    for(i=1;i<tane-1;i++)
    {
        toplam=bir+iki;
        bir=iki;
        iki=toplam;

        printf("%d  ",toplam);

    }

}
int main()
{
    int sayi;
    printf("Lutfen fibonacci dizisinin uzunlugunu giriniz:");
    scanf("%d",&sayi);
    fibonacci(sayi);

    return 0;
}
