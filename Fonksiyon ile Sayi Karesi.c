#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Max(int,int);
int Max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else {
    return b;
    }

}

int main()
{
    int n,i,j;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &n);
    printf("\n");
      for(i=1;i<=2*n-1;i++)
      {
          for(j=1;j<=2*n-1;j++)
          {
              printf("%d ",Max(abs(n-i),abs(n-j))+1);
          }
          printf("\n");
      }


    return 0;
}
