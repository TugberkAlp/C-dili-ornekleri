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

int main()
{
    int s,t;
    int a,b;
    int m,n;
    int i,degisken;
    int sayac1=0,sayac2=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&degisken);
        if(degisken+a>=s && degisken+a<=t)
        {
            sayac1++;
        }
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&degisken);
        if(degisken+b>=s && degisken+b<=t)
        {
            sayac2++;
        }
    }
    printf("%d\n",sayac1);
    printf("%d",sayac2);
    return 0;
}
