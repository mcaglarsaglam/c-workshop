
#include <stdio.h>
#include <stdlib.h>

void can()
{

  int x = 3;

  printf("%d", x);
}
main()
{
  // Fonksiyonlarda Global Local Değişken

  int x = 1;

  {
    int x = 2;

    printf("%d\n", x);

    can();
  }
  return 0;
}
