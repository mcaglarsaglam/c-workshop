
#include <stdio.h>
#include <stdlib.h>

void number1()
{
  int number;

  while (1)
  {
    printf("please enter a number\n");
    scanf("%d", &number);

    if (number < 0)
    {
      break;
    }
  }
}

int main()
{

  // Klavyeden negatif bir değer girinceye kadar kullanıcıdan sürekli sayı
  // isteyen C programını fonksiyon kullanarak yazınız.

  number1();

  return 0;
}
