
#include <stdio.h>

main()
{

  // Suppress odd and even numbers from 0 to 10 using a while loop

  int i = 0;

  while (i <= 10)
  {
    printf("%d ", i);
    i += 2;
  }

  int i = 1;

  while (i < 10)
  {
    printf("%d\n", i);
    i += 2;
  }
  return 0;
}