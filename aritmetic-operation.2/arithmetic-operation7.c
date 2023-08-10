
#include <stdio.h>
#include <stdlib.h>

int main()
{

  int number;
  int ones_digit;
  int they_digit;

  printf("Please enter a number\n");
  scanf("%d", &number);

  ones_digit = number % 10;
  they_digit = number % 100 / 10;

  printf("ones digit: %d\n", ones_digit);
  printf("they digit: %d", they_digit);

  return 0;
}