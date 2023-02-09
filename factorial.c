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
int faktoriyel(int *sayi)
{
    int sonuc=1;
    int i;
    for(i=*sayi;i>1;i--)
    {
        sonuc*=(*sayi);
        (*sayi)--;
    }
    return sonuc;
}
int main()
{
    int n;
    int orijinal;
    printf("Lutfen bir deger giriniz: ");
    scanf("%d",&n);
    orijinal=n;
    printf("%d! = %d",orijinal,faktoriyel(&n));


    return 0;
}
