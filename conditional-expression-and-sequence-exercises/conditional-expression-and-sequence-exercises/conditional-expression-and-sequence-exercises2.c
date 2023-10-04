
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Bir telefon şirketi telefonda 3 dakikaya kadar konuşmanın ücretini 0,25 TL
  // olarak belirlemiştir.Ancak şirket,konuşma süresi 3 dakikayı aştığı durumda
  // bunden sonraki her dakika için ek olarak 0,08 TL almaktadır.Telefon
  // görüşmesinin süresini dakika cinsinden girdi olarak alan ve konuşmanın
  // ücretini hesaplayan bir C programı yazınız.

  // Örnek çıktı
  // Telefon konuşma süresi: 8.0
  // Ücter:0,65

  float time;
  float fee;

  printf("phone talk time: \n");
  scanf("%f", &time);
  if (time <= 3)
  {
    fee = 0.25;
  }
  else
  {
    fee = 0.25 + (time - 3) * 0.08;
  }
  printf("fee: %f", fee);

  return 0;
}