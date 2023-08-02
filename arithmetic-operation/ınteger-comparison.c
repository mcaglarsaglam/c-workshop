

#include <stdio.h>
#include <stdlib.h>

int main()
{

  // kullanıcıdan girdiği 2 tam sayıdan,ilkinin ikincisi ile karşılaştırıp eşit
  // olup olmadığını,eğer eşit değil ise ikinciden büyük mü yoksa küçük mü
  // olduğunu ekrana bastıran bir program yazınız.

  // yazdığımız program ılk sayının ikinci sayının katı olup olamadığına bakınız

  int a, b;

  printf("please enter 2 values\n");
  scanf("%d", &a);
  scanf("%d", &b);

  if (a == b)
  {
    printf("2 numbers are equal\n");
  }
  if (a != b)
  {
    printf("2 numbers are not equal\n");
  }
  if (a < b)
  {
    printf("first value is less than second value\n");
  }
  if (a > b)
  {
    printf("first value is greater than second value\n");
  }

  if (a % b == 0)
  {
    printf("the first value is a multiple of the second value\n");
  }
  else
  {
    printf("the first value is not a multiple of the second value\n");
  }

  return 0;
}
