#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main()
{
    int i=0;
    int encok;
    char harf;
    int en[26]={0};
    char cumle[100];
    printf("Bir cumle giriniz: \n");
    fgets(cumle,sizeof(cumle),stdin);
    while(cumle[i])
    {
        if(cumle[i]>='a' && cumle[i]<='z')
        {
            en[cumle[i]-'a']++;
        }
        i++;
    }
    encok=en[0];
    for(i=1;i<26;i++)
    {
        if(en[i]!=0)
        {
            if(en[i]>encok)
            {
                encok=en[i];
                harf=i+'a';  
            }
        }
    }
    printf("En cok kullanilan: %c",harf);
    return 0;
}
