#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int secim;
    int bakiye=1000;//(istenilen deger girilebilir.)
    int cekilecek_tutar;
    int yatirilacak_tutar;

    while(secim)
    {
        printf("1-Bakiye  Goruntule\n");
        printf("2-Bakiye Yatir\n");
        printf("3-Bakiye Cek\n");
        printf("0-Cikis\n");
        printf("\nLutfen Bir Secim Yapiniz: ");
        scanf("%d",&secim);

        switch(secim)
        {
        case 0:
            break;
        case 1:
            printf("Mevcut Bakiye: %d\n\n",bakiye);
            break;
        case 2:
            printf("Lutfen Yatirmak Istediginiz Bakiyeyi Giriniz: \n");
            scanf("%d",&yatirilacak_tutar);
            bakiye +=yatirilacak_tutar;
            printf("Bakiye Yatirma Islemi Tamamlandi.\n");
            printf("Yatirilan Bakiye: %d\n",yatirilacak_tutar);
            printf("Son Bakiyeniz: %d\n\n",bakiye);
            break;
        case 3:
            printf("Lutfen Cekmek Istediginiz Bakiyeyi Giriniz: \n");
            scanf("%d",&cekilecek_tutar);
            if(cekilecek_tutar>bakiye)
            {
                printf("Mevcut Bakiyenizden Yuksek Bir Deger Girdiniz!\n\n");
            }
            else
            {
                printf("Bakiye Cekme Islemi Tamamlandi.\n");
                bakiye -=cekilecek_tutar;
                printf("Son Bakiyeniz: %d\n\n",bakiye);
            }
            break;

        default:
            printf("Gecersiz Bir Deger Girdiniz!\n\n");
            break;
        }
    }
    
    return 0;
}
