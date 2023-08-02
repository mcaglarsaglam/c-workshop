
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcıdan 3 sayı girmesini isteyen, kullanıcının girdigi bu sayıları
  // okuyup sayıların en büyüğü ve en küçüğünü ekrana bastıran programın C
  // kodunu yazınız.

  int a, b, c;
  int max;
  int min;

  printf("Please enter 3 values.\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  max = a;

  if (b > max)
  {
    max = b;
  }
  if (c > max)
  {
    max = c;
  }

  printf("our maximum value=%d\n", max);

  min = a;

  if (b < min)
  {
    min = b;
  }
  if (c < min)
  {
    min = c;
  }

  printf("our minimum value=%d", min);

  return 0;
}
