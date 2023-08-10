
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcı tarafından girilen iki sayının çarpımının işaretini, çarpmadan
  // bulan bir program yazınız.

  // örnek

  // Entrez 2 entiers: -3 432
  // >>sign(-3*432)=-1

  // Entrez 2 entiers: 5 10
  // >>sign(5*10)=1

  // Entrez 2 entiers:0 78
  // >>sign(0*78)=0

  int number1, number2;

  printf("please enter 2 numbers\n");
  scanf("%d", &number1);
  scanf("%d", &number2);

  if ((number1 > 0 && number2 > 0) || (number1 < 0 && number2 < 0))
  {
    printf(">>sign (%d*%d)=+1", number1, number2);
  }
  else if ((number1 > 0 && number2 < 0) || (number1 < 0 && number2 > 0))
  {
    printf(">>sign (%d*%d)=-1", number1, number2);
  }
  else
  {
    printf(">>sign (%d*%d)=0", number1, number2);
  }

  return 0;
}
