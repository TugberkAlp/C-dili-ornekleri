#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void sirala(int[],int);
void terssirala(int[],int);
int main()
{
    srand(time(0));
    int n;
    printf("Kac adet sayi uretilecek: ");
    scanf("%d",&n);
    int dizi[100];
    for(int i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\t",dizi[i]);
    }
    sirala(dizi,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",dizi[i]);
    }
    terssirala(dizi,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",dizi[i]);
    }
    return 0;
}
sirala(int A[],int adet)
{
    printf("\nKucukten buyuge dogru:\n\n");
    int degisken;
    for(int j=0;j<adet-1;j++)
    {
        for(int i=0;i<adet-1-j;i++)
        {
            if(A[i]>A[i+1])
            {
                degisken=A[i];
                A[i]=A[i+1];
                A[i+1]=degisken;
            }
        }
    }
}
terssirala(int A[],int adet)
{
    printf("\nBuyukten kucuge dogru:\n\n");
    int degisken;
    for(int j=0;j<adet-1;j++)
        {
            for(int i=0;i<adet-1-j;i++)
            {
                if(A[i]<A[i+1])
                {
                    degisken=A[i];
                    A[i]=A[i+1];
                    A[i+1]=degisken;
                }
            }
        }
}

