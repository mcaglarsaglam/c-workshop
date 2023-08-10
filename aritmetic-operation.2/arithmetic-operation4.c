
#include <stdio.h>
#include <stdlib.h>
#define UNIT 40
#define WORKMANSHIP 200

int main()
{

  // Halı fiyatı hesaplama
  // Bir öğrenci evinde öğrenciler salonu halıyla kaplatmak
  // istemektedirler.Döşenecek halının metrekaresi 40 TL'dir .Ayrıca halıcı
  // halıyı salonu  döşemek için 200 TL işçilik almaktadır.Buna göre metrekareyi
  // girdi olarak alan ve halıcıya ödenmesi gereken toplam tutarı hesalayan C
  // programı yazınız.

  float square_meters;
  float fee;

  printf("Please enter the square meter of the room.\n");
  scanf("%f", &square_meters);

  fee = square_meters * UNIT + WORKMANSHIP;
  printf("your total fee : %.2f", fee);

  return 0;
}
