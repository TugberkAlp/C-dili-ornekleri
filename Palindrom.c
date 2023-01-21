#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 40 //maksimum cumle boyutu = 40

void cumleyi_oku(char tab[max])
{
    int i=0;
    scanf("%c",&tab[i]);
    while((tab[i]!= '\n') && i<max)
    {
        i++;
        scanf("%c",&tab[i]);
    }
    tab[i]='\0';
}
void boslugu_kaldir(char tab[max])
{
    int i,j=0;
    for(i=0;tab[i]!='\0';i++)
    {
        if(tab[i]!=' ')
    {
        tab[j]=tab[i];
        j++;
    }
    }
    tab[j]='\0';
    printf("Boslugu kaldirdiktan sonra dizimiz: ");
    for(i=0;tab[i]!='\0';i++)
    {
        printf("%c",tab[i]); 
    }
    printf("\n");
}
int dizinin_boyu(char tab[max])
{
    int i;
    for(i=0;tab[i]!='\0';i++);
    return i;
}
void tersine_cevir(char can[max],char ters[max])
{
    int i;
    int j=dizinin_boyu(can)-1;
    for(i=0;can[i]!='\0';i++)
    {
        ters[i]=can[j];
        j--;
    }
    printf("Dizimizin ters hali: ");
    for(i=0;ters[i]!='\0';i++)
    {
        printf("%c",ters[i]);
    }
    printf("\n");
}
int palindrome(char dizi[max])
{
    int l;
    int test=0;
    int i=0;
    char gecici[max];
    boslugu_kaldir(dizi);
    l=dizinin_boyu(dizi);
    tersine_cevir(dizi,gecici);
    for(i=0;i<l;i++)
    {
        if(gecici[i]!=dizi[i])
        {
            test = 0;
        }
        else
        {
            test = 1;
        }
    }
    return test;
}
int main()
{
    char cumle[max];
    int a;
    printf("Lutfen bir cumle giriniz: ");
    cumleyi_oku(cumle);
    a=palindrome(cumle);
    if(a==1)
    {
        printf("Bu bir palindromdur.");
    }
    if(a==0)
    {
        printf("Bu bir palindrom degildir.");
    }
    return 0;
}
