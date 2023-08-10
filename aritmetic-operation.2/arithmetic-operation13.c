
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // tek haneli 3 adet sayı olan number1,number2 ve number3 girdi olarak alan ve
  // yüzler basamağına number1 ,onlar basamağına number2,birler basamağına
  // number3 koyan ve bu sayıyı bulan bie C programı yazınız.

  int number1;
  int number2;
  int number3;
  int total;

  printf("hundreds digit :\n");
  scanf("%d", &number1);

  printf("they digit :\n");
  scanf("%d", &number2);

  printf("ones digit :\n");
  scanf("%d", &number3);

  total = 100 * number1 + 10 * number2 + 1 * number3;

  printf("our number : %d", total);

  return 0;
}