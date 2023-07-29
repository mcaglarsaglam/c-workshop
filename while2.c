
#include <stdio.h>

main()
{

  // endless loop

  while (0)
  {
    printf("loop\n");
  }
  printf("endless loop\n");

  while (1)
  {
    printf("loop\n");
  }
  printf("endless loop\n");

  // Do while usage

  int i = 0;

  do
  {
    printf("%d\n", i);
    i++;
  } while (i <= 10);

  return 0;
}