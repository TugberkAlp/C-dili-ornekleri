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

void yazdir(int matris[3][3])
{
    printf("\n");
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void kosegenal(int matris [3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d  ",matris[i][j]);
            }
        }
    }
    printf("\n");
}
void terskosegenal(int matris [3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==3-1-j)
            {
                printf("%d  ",matris[i][j]);
            }
        }
    }
    printf("\n");
}
void transpoz(int matris[3][3])
{
    printf("\n");
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matris[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}
int simetrik(int matris[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(matris[i][j]!=matris[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}
void matristearama(int matris[3][3])
{
    int i,j,aranan;
    printf("Matriste bulmak istediginiz degeri giriniz: ");
    scanf("%d",&aranan);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(matris[i][j]==aranan)
            {
                printf("\nAradiginiz %d degeri matrisin %d. satir %d. sutunundadir.\n",aranan,i+1,j+1);
            }
        }
    }
}
void satirsirala(int matris[3][3])
{
    int i,j,k;
    int degis=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                if(matris[i][k]<matris[i][k+1])
                {
                    degis=matris[i][k];
                    matris[i][k]=matris[i][k+1];
                    matris[i][k+1]=degis;                   
                }
            }
        }
    }
    yazdir(matris);
}

int main()
{
    int matris[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Lutfen matrisin %d. satir %d. sutun elemanini giriniz: ",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    printf("\nMatrisimiz bu sekildedir: ");
    yazdir(matris);
    printf("Matrisin kosegenleri: ");
    kosegenal(matris);
    printf("Matrisin ters kosegenleri: ");
    terskosegenal(matris);
    printf("Matris transpozu: \n");
    transpoz(matris);
    if(simetrik(matris))
    {
        printf("Matris simetriktir.\n");
    }
    else
    {
        printf("Matris simetrik degildir.\n");
    }
    matristearama(matris);
    printf("\nMatrisin satirlarinin buyukten kucuge siralanmis hali bu sekildedir: \n");
    satirsirala(matris);
    return 0;
}
