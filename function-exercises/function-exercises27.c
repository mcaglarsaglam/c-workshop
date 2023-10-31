
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int total(int N)
{
  int j;
  int total = 0;

  for (j = 1; j <= N; j++)
  {
    total = total + pow(j, 2);
  }
  return total;
}

int main()
{

  // Aşağıda verilen serinin hesaplanmasını sağlayan C programını fonksiyon
  // kullanarak yazınız.
  // 1^2+2^2+3^2+4^2...=

  int n;
  printf("Please enter the value of N\n");
  scanf("%d", &n);
  printf("sum of the series=%d\n", total(n));

  return 0;
}