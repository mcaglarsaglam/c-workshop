
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcının girdiği n sayısına kadar olan tüm tam sayıların toplamını
  // hesaplayıp düzgün bir şekilde ekrana bastıran bir program yazınız.

  int a, i;
  int conclusion;

  printf("Please enter a number\n");
  scanf("%d", &a);

  conclusion = 0;
  i = 1;

  while (i <= a)
  {
    if (i == a)
    {
      printf("%d", a);
    }
    else
    {
      printf("%d + ", i);
    }
    conclusion = conclusion + i;
    i++;
  }

  printf(" =%d", conclusion);

  return 0;
}