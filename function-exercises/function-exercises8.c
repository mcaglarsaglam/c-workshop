
#include <stdio.h>
#include <stdlib.h>

int number3(int j, int k)
{
  if (j > k)
  {
    return 1;
  }
  else if (j < k)
  {
    return 0;
  }
  else
  {
    return 2;
  }
}

int main()
{

  // Klavyeden girilen iki tamsayıdan büyük olanını fonksiyon kullanarak bulan C
  // programını yazınız.

  int number1;
  int number2;
  int conclusion;

  printf("please enter 2 numbers\n");
  scanf("%d", &number1);
  scanf("%d", &number2);
  conclusion = number3(number1, number2);

  if (conclusion == 1)
  {
    printf("%d is greater than %d\n", number1, number2);
  }
  else if (conclusion == 0)
  {
    printf("%d is greater than %d\n", number2, number1);
  }
  else
  {
    printf("%d equals %d\n", number1, number2);
  }

  return 0;
}