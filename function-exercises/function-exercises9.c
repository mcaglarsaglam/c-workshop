
#include <stdio.h>
#include <stdlib.h>

int numbervalue(int j)
{
  return j % 2;
}

int main()
{

  // Klavyeden girilen pozitif bir tamsayının tek ya da çift olduğunu fonksiyon
  // kullanarak bulan C programını yazınız.

  int number;
  int conclusion;

  printf("please enter a number \n");
  scanf("%d", &number);

  conclusion = numbervalue(number);

  if (conclusion == 1)
  {
    printf("number is odd number");
  }
  else
  {
    printf("number is even number");
  }

  return 0;
}