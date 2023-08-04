#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // string içerisinddeki herhangi bir karakteri degiştirme

  char CAGLAR[] = "Caglar Saglam ";

  CAGLAR[0] = 'S';

  printf("%s", CAGLAR);

  return 0;
}