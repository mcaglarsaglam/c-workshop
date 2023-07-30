
#include <stdio.h>
#include <stdlib.h>

int kare(int can)
{

  int conclusion = can * can;
  return conclusion;
}
main()
{

  // degiskenin degeriyle islem

  int x = 4, square;

  square = kare(x);

  printf("%d", square);

  return 0;
}