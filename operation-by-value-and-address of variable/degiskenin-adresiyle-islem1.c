
#include <stdio.h>
#include <stdlib.h>

void square(int *conclusion, int *can)
{

  *conclusion = *can * *can;
}

main()
{

  // degiskenin adresiyle islem

  int x = 4;
  int conclusion;

  square(&conclusion, &x);

  printf("%d", conclusion);

  return 0;
}
