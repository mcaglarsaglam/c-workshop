
#include <stdio.h>
#include <stdlib.h>

int perfect(int j)
{

  int n = 1;
  int total = 0;

  while (n < j)
  {
    if (j % n == 0)
    {
      total = total + n;
    }
    n++;
  }
  if (total == j)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{

  // Kendisi hariç pozitif tam bölenlerinin toplamı kendisine eşit olan sayılara
  // mükemmel sayı adı verilmektedir.Buna göre klavyeden girilen bir sayının
  // mükemmel olup olmadıgını fonksiyon kullanarak bulan bir C programını
  // yazınız.

  int number;
  int conclusion;

  printf("please enter a number\n");
  scanf("%d", &number);

  conclusion = perfect(number);

  if (conclusion == 1)
  {
    printf("Perfect number \n ");
  }
  else
  {
    printf("not a perfect number ");
  }

  return 0;
}