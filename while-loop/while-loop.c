
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // while döngüsü kullanarak program yazınız.

  int a;

  printf("please enter a value\n");
  scanf("%d", &a);

  while (a != 0)
  {
    printf("%4d", a);

    a = a - 1;
  }

  return 0;
}