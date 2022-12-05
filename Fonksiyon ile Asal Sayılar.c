#include <stdio.h>
#include <stdlib.h>
#include <math.h>

AsalMi(int,int);

int main()
{
    int sayi;
    int i, kontrol;
    printf("Lutfen Pozitif Bir Tam Sayi Giriniz: ");
    scanf("%d",&sayi);
    printf("%d Sayisina Kadar Olan Asal Sayilar Asagidadir.\n",sayi);
    for(i=2;i<=sayi;i++)
    {
        kontrol=AsalMi(i,i/2);
        if(kontrol==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
AsalMi(int sayi,int i)
{
    if(i==1)
    {
        return 1;
    }
    else if(sayi%i==0)
    {
        return 0;
    }
    else
    {
        AsalMi(sayi,i-1);
    }
}
