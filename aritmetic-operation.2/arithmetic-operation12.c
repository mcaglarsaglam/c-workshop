
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Sayı yer değiştirme
  // A ve B değişkenlerine iki tamsayıyı girdi olarak alan ve yerini değiştiren
  // bir C programı yazınız.

  int number1;
  int number2;
  int number3;

  printf("enter 1st number\n");
  scanf("%d", &number1);
  printf("Enter 2nd number\n");
  scanf("%d", &number2);

  number3 = number1;
  number1 = number2;
  number2 = number3;

  printf("Our 1st issue : %d\n", number1);
  printf("Our 2nd issue : %d", number2);

  return 0;
}