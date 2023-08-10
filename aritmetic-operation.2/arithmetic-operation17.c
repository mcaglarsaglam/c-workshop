
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcıdan bir 'n' değerini girmesini isteyin
  // 1+1/2+1/3+......1/n degerlerini hesaplayın.

  int n;
  int i;
  float conclusion;

  do
  {
    printf("how many n\n");
    scanf("%d", &n);
  } while (n < 1);

  for (i = 1; i <= n; i++)
  {
    conclusion += (float)1 / i;
  }
  printf("conclusion : %f", conclusion);

  return 0;
}