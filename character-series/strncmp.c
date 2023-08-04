#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Strncmp

  int conclusion;

  char C[20] = "abcdef";
  char B[20] = "ABCDEF";

  conclusion = strncmp(C, B, 4);

  if (conclusion < 0)
  {

    printf("C is less than B");
  }
  else if (conclusion > 0)
  {

    printf("C is bigger than B");
  }
  else
  {

    printf("Equal to both");
  }

  return 0;
}