#include <stdio.h>
#include <stdlib.h>

int main()
{

  // 3 boyutlu sayı dizileri

  int caglar[2][3][2];
  int i, j, k;

  printf("Please enter 12 values\n");

  for (i = 0; i < 2; i++)
  {

    for (j = 0; j < 3; j++)
    {

      for (k = 0; k < 2; k++)
      {

        scanf("%d", &caglar[i][j][k]);
      }
    }
  }
  printf("the values you entered\n");

  for (i = 0; i < 2; i++)
  {

    for (j = 0; j < 3; j++)
    {

      for (k = 0; k < 2; k++)
      {
        printf("can[%d],[%d],[%d]=%d\n", i, j, k, caglar[i][j][k]);
      }
    }
  }

  return 0;
}