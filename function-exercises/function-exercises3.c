
#include <stdio.h>
#include <stdlib.h>

int factorio(int census)
{
  int j;
  int conclusion = 1;

  for (j = 1; j <= census; j++)
  {
    conclusion = conclusion * j;
  }
  return conclusion;
}

int main()
{

  // Klavyeden girilen bir tamsayının faktoriyelini fonksiyon kullanarak hesaplayan C programı yazınız.

  int number;

  printf("Please enter a number:\n");
  scanf("%d", &number);

  printf("%d! = %d", number, factorio(number));

  return 0;
}