#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

// 220202028 Tuğberk Alptürk HARMAN

struct ogrenci
{
  char no[10];
  char ad_soyad[50];
  double ortalama;
  int akts_toplam;
  int giris_yili;
};

struct ogrenci BasariliOgrenciBul(struct ogrenci ogrenci1, struct ogrenci ogrenci2){
  if(ogrenci1.ortalama > ogrenci2.ortalama){
    return ogrenci1;
  }else if(ogrenci2.ortalama > ogrenci1.ortalama){
    return ogrenci2;
  }else
  {
    if(ogrenci1.akts_toplam > ogrenci2.akts_toplam){
      return ogrenci1;
    }else if(ogrenci2.akts_toplam > ogrenci1.akts_toplam){
      return ogrenci2;
    }else
    {
      if(ogrenci1.giris_yili < ogrenci2.giris_yili){
        return ogrenci1;
      }else if(ogrenci2.giris_yili < ogrenci1.giris_yili){
        return ogrenci2;
      }else
      {
        srand(time(NULL));
        int zaman = rand()%2;
        if(zaman == 0){
          return ogrenci1;
        }else if(zaman == 1){
          return ogrenci2;
        }
      }
    }
  }


}

int main()
{
  struct ogrenci ogrenci1;
  struct ogrenci ogrenci2;

  printf("1. ogrencinin bilgilerini girin:\n");
  printf("No: ");
  scanf("%s", ogrenci1.no);
  printf("Ad Soyad: ");
  scanf(" %[^\n]", ogrenci1.ad_soyad);
  printf("Ortalama: ");
  scanf("%lf", &ogrenci1.ortalama);
  printf("AKTS Toplam: ");
  scanf("%d", &ogrenci1.akts_toplam);
  printf("Giris Yili: ");
  scanf("%d", &ogrenci1.giris_yili);
  getchar();

  printf("2. ogrencinin bilgilerini girin:\n");
  printf("No: ");
  scanf("%s", ogrenci2.no);
  printf("Ad Soyad: ");
  scanf(" %[^\n]", ogrenci2.ad_soyad);
  printf("Ortalama: ");
  scanf("%lf", &ogrenci2.ortalama);
  printf("AKTS Toplam: ");
  scanf("%d", &ogrenci2.akts_toplam);
  printf("Giris Yili: ");
  scanf("%d", &ogrenci2.giris_yili);
  getchar();

  struct ogrenci basarili_ogrenci = BasariliOgrenciBul(ogrenci1,ogrenci2);

  printf("Basarili ogrenci: %s %s\n",basarili_ogrenci.no,basarili_ogrenci.ad_soyad);

  return 0;
}
