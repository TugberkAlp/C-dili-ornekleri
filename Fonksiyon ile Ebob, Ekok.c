#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ebob(int,int);
void ekok(int,int);

int main()
{
    int a,b;
    printf("Iki tane tam sayi giriniz:");
    scanf("%d %d",&a,&b);
    ebob(a,b);
    printf("\n");
    ekok(a,b);
    return 0;
}
void ebob(int a,int b)
{
    int ebob=1;
    int buyuk;
    if(b>a)
    {//b=5 a=3
        buyuk=a;//buyuk 3
        a=b;//a=5
        b=buyuk;//b 3
    }//a=5 b=3(buyuk olan daima a)
    for(int i=1;i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ebob=i;
        }
    }
    printf("%d ve %d sayilarinin en buyuk ortak boleni: %d",a,b,ebob);
}

void ekok(int a,int b)
{
    int ekok=1;
    int buyuk;
    if(b>a)
    {//b=5 a=3
        buyuk=a;//buyuk 3
        a=b;//a=5
        b=buyuk;//b 3
    }//a=5 b=3(buyuk olan daima a)
    for(int i=a*b;i>=a;i--)
    {
        if(i%a==0 && i%b==0)
        {
            ekok=i;
        }
    }
    printf("%d ve %d sayilarinin en kucuk ortak kati: %d",a,b,ekok);
}

