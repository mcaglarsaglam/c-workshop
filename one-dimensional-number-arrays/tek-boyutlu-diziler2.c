#include <stdio.h>
#include <stdlib.h>

int main()
{

  int beyza[11];
  int b;

  for (b = 0; b < 11; b++)
  {
    beyza[b] = 2 * b;
  }
  for (b = 0; b < 11; b++)
  {
    printf("%d\n", beyza[b]);
  }
  return 0;
}