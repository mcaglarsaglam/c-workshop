
#include <stdio.h>
#include <stdlib.h>

main()
{
  // global local degisken mantıgı

  int x = 1;

  {
    int x = 2;

    printf("%d", x);
  }
  return 0;
}
