#include <stdio.h>
#include <stdlib.h>

int factorial(int k)
{
  int i;
  int conclusion = 1;

  for (i = 1; i <= k; i++)
  {
    conclusion = conclusion * i;
  }
  return conclusion;
}

int main()
{

  // 1'den 10'a kadar her bir sayının faktoriyelini fonksiyon kullanarak
  // hesaplayan ve sonuçları ekrana listeleyen C programı yazın.

  int j;

  for (j = 1; j <= 10; j++)
  {
    printf("%d!=%d\n", j, factorial(j));
  }

  return 0;
}