#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int i,t,gecici;
    int n=5;
    int elde=0;
    int A[]={1,2,3,4,5};
    int B[]={9,0,5,7,4};
    int C[6];
    for(i=n-1;i>-1;i--)
    {
        gecici=A[i]+B[i]+elde;
        C[i+1]=gecici%10;
        elde=gecici/10;
    }
    C[0]=elde;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",C[i]);
    }
    return 0;
}

