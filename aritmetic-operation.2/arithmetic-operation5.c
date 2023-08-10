
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Bir halıcı çocuklar için 3 ayrı tip halı satmaktadır.Bu halıların tipi,kodu
  // ve metrekare birim fiyatları aşşağıda verilmiştir.

  // Halı tipi|  Kodu   | Fiyatı  |
  //    Twetty      T         18
  //     Bugs       B         17
  //   Spiderman    S         19

  // Sipariş alınan halı tipi ve döşenecek alanın metrekaresi girildiğinde
  // ödemesi gereken ücreti görüntülüyen bir C programı yazınız.

  char code;
  float area;
  float fee;

  printf("carpet type T,B,S\n");
  scanf("%c", &code);
  printf("Please enter field\n");
  scanf("%f", &area);

  if (code == 'T')
  {
    fee = area * 18;
  }
  else if (code == 'B')
  {
    fee = area * 17;
  }
  else if (code == 'S')
  {
    fee = area * 19;
  }
  else
  {
    printf("the code is not correct");
  }

  printf("fee due %f TL", fee);

  return 0;
}