#include <stdio.h>
#include <stdlib.h>
#include <math.h>

UsAlma(int,int);

int main()
{
    int sayi,us;
    printf("Lutfen Ussu Alinacak Bir Sayi Giriniz: ");
    scanf("%d",&sayi);
    printf("Lutfen Ussu Giriniz: ");
    scanf("%d",&us);
    printf("%d ussu %d = %d'dir",sayi,us,UsAlma(sayi,us));


    return 0;
}
UsAlma(int sayi,int us)
{
    if(us==0)
    {
        return 1;
    }
    else
    {
        return sayi*UsAlma(sayi,us-1);
    }
}
