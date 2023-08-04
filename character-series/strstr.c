
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{

  // Strstr

  char can[100] = "We are learning C language";
  char *sub;
  sub = strstr(can, "are");

  printf("\n new string after search: %s", sub);

  return 0;
}