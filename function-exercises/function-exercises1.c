
#include <stdio.h>
#include <stdlib.h>

int total(int n1, int n2)
{
  return n1 + n2;
}

int main()
{

  // Klavyeden girilen iki tamsayının toplamını fonksiyon kullanarak hesaplayan C programı yazınız.

  int number1;
  int number2;

  printf("please enter two numbers\n");
  scanf("%d", &number1);
  scanf("%d", &number2);
  printf("sum of numbers %d", total(number1, number2));

  return 0;
}