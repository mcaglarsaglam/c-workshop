
#include <stdio.h>
#include <stdlib.h>

void floyd(int n)
{
  int i = 1;
  int j;
  int k = 1;
  while (i <= n)
  {
    j = 1;
    while (j <= i)
    {
      printf("%3d", k);
      k++;
      j++;
    }
    printf("\n");
    i++;
  }
}

int main()
{

  // Floyd üçgeni
  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10

  int line;
  printf("enter number of rows for floyd triangle \n");
  scanf("%d", &line);
  floyd(line);

  return 0;
}