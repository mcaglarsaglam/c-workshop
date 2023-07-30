#include <stdio.h>
#include <stdlib.h>

int main()
{

  // 2 boyutlu sayı dizileri

  int caglar[2][3] = {{1, 2, 3}, {5, 8, 33}};

  printf("%d\n", caglar[1][2]);
  printf("%d\n", caglar[0][1]);

  return 0;
}