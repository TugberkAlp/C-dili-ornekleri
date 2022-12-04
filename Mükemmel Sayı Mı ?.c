#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int MukemmelSayiMi(int);

int main()
{
    int sayi;
    int sonuc;
    char tekrar;
    printf("Mukemmel Sayi: Kendisi haric tum bolenlerinin kendisine esit oldugu sayidir.\n\n");
    tekrarla:
    printf("Lutfen Pozitif Bir Tam Sayi Giriniz: ");
    scanf("%d",&sayi);
    sonuc=MukemmelSayiMi(sayi);
    if(sonuc==1)
    {
        printf("Girdiginiz Sayi Mukemmel Sayidir.\n");
    }
    else
    {
        printf("Girdiginiz Sayi Mukemmel Sayi Degildir.\n");
    }
    printf("Baska Bir Sayi Denemek Isterseniz 'Y' Tusuna Basiniz.\n");
    scanf(" %c",&tekrar);
    if(tekrar=='y'||tekrar=='Y')
    {
        printf("\n");
        goto tekrarla;
    }
    return 0;
}

int MukemmelSayiMi(int sayi)
{
    int toplam=0;
    int i;
    for(i=1;i<sayi;i++)
    {
        if(sayi%i==0)
        {
            toplam =toplam + i;
        }
    }
    if(toplam==sayi)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
