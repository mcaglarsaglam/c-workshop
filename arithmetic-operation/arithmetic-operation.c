
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // kullanıcıdan girmesini istediği a,b,c ve x degerlerini kullanarak
  // aşşağıdaki aritmatik işlemin sonucunu hesaplayan ve ekrana basan C
  // programını yazınız.

  int a, b, c, x;
  int conclusion;

  printf("Please enter a b c and x values\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &x);

  conclusion = a * x * x + b * x + c;

  printf("ax^2+bx+c value=%d", conclusion);

  return 0;
}
