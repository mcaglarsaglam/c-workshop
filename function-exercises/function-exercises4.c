
#include <stdio.h>
#include <stdlib.h>

int top(int bas, int us)
{
  int j;
  int conclusion = 1;

  for (j = 1; j <= us; j++)
  {

    conclusion = bas * conclusion;
  }
  return conclusion;
}

int main()
{

  // Klavyeden taban ve üst değeri girilen a^b şeklindeki bir işlem sonucunu
  // fonksiyon kullanarak hesaplayan ve sonuçları ekrana listeleyen C programı
  // yazınız.

  int number_one;
  int number_two;

  printf("Please enter base and exponent numbers\n");
  scanf("%d", &number_one);
  scanf("%d", &number_two);

  printf("%d ^ %d = %d", number_one, number_two, top(number_one, number_two));

  return 0;
}