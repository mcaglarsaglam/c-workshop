
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcıdan pozitif bir tamsayıyı girdi olarak alıp, bu sayının 13 veya
  // 17'ye bölünüp bölünmediğini bularak bu durumu mesaj ile belirten bir C
  // programı yazınız.

  int number;

  printf("Please enter a number\n");
  scanf("%d", &number);

  if ((number % 13 == 0) && (number % 17 == 0))
  {
    printf("our number is divisible by 13 and 17\n");
  }
  else if ((number % 13 == 0))
  {
    printf("number is only divisible by 13\n");
  }
  else if ((number % 17 == 0))
  {
    printf("number is only divisible by 17\n");
  }
  else
  {
    printf("number is not divisible by either 13 or 17");
  }

  return 0;
}
