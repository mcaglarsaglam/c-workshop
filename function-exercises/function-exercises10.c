
#include <stdio.h>
#include <stdlib.h>

void oddnumber(int j)
{
  int i = 0;
  while (i <= j)
  {
    if (i % 2 == 1)
    {
      printf("%d \n", i);
    }
    i++;
  }
}

int main()
{

  // Klavyeden girilen pozitif bir N tamsayısına kadar olan tek sayıları ekrana
  // listeleyen C programını fonksiyon kullanarak yazınız.

  int number;

  printf("please enter a positive integer \n ");
  scanf("%d", &number);

  oddnumber(number);

  return 0;
}