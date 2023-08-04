
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{

  // example.2

  char caglar[100][100] = {"bir", "iki", "uç", "dort", "bes"};

  printf("%s\n", caglar[3]);
  printf("%c", caglar[3][2]);

  return 0;
}