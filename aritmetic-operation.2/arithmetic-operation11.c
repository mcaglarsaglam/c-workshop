
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcıdan 3 adet sayı alan ve bu sayıların ortalamasını veren bir C
  // programı yazınız.

  float number1;
  float number2;
  float number3;
  float average;

  printf("Please enter 3 numbers\n");
  scanf("%f", &number1);
  scanf("%f", &number2);
  scanf("%f", &number3);
  average = (number1 + number2 + number3) / 3;

  printf("average : %.2f", average);

  return 0;
}