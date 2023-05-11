#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

// 220202028 Tuğberk Alptürk HARMAN

struct ogrenci
{
  char no[50];
  char ad[50];
  float ortalama;
  int akts;
  int girisYili;
};
struct ogrenci BasariliOgrenciBul(struct ogrenci o1,struct ogrenci o2)
{
  srand(time(NULL));
  if(o1.ortalama > o2.ortalama){
    return o1;
  } else if(o2.ortalama > o1.ortalama){
    return o2;
  }
  if(o1.akts > o2.akts){
    return o1;
  } else if(o2.akts > o1.akts){
    return o2;
  }
  if(o1.girisYili < o2.girisYili){
    return o1;
  } else if(o2.girisYili < o1.girisYili){
    return o2;
  }
  if(rand()%2 == 1){
    return o1;
  } else {
    return o2;
  }
}

int main()
{
  struct ogrenci o1,o2,basarili;
  char satir;//char karakter dizisi alirkenki hatayi cozer.

  printf("Birinci ogrencinin bilgilerini giriniz:\n");
  printf("Ogrenci numarasi: ");
  fgets(o1.no,50,stdin);
  printf("Ogrencinin adi soyadi: ");
  fgets(o1.ad,50,stdin);
  printf("Ortalama: ");
  scanf("%f",&o1.ortalama);
  printf("AKTS toplami: ");
  scanf("%d",&o1.akts);
  printf("Giris yili: ");
  scanf("%d",&o1.girisYili);
  printf("\n");

  printf("Ikinci ogrencinin bilgilerini giriniz:\n");
  scanf("%c",&satir);//char karakter dizisi giricekken girilen enteri etkisiz hale getirir.
  printf("Ogrenci numarasi: ");
  fgets(o2.no,50,stdin);
  printf("Ogrencinin adi soyadi: ");
  fgets(o2.ad,50,stdin);
  printf("Ortalama: ");
  scanf("%f",&o2.ortalama);
  printf("AKTS toplami: ");
  scanf("%d",&o2.akts);
  printf("Giris yili: ");
  scanf("%d",&o2.girisYili);

  basarili = BasariliOgrenciBul(o1,o2);
  printf("\nDaha basarili ogrenci:\n");
  printf("Ogrenci numarasi: %s",basarili.no);
  printf("Ogrenci adi soyadi: %s\n",basarili.ad);


  return 0;
}
