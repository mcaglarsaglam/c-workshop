
#include <stdio.h>
#include <stdlib.h>

void division(int j, int k)
{
  int remainder;
  int quotient;

  remainder = j % k;
  quotient = j / k;

  printf("remainder=%d quotient=%d\n", remainder, quotient);
}

int main()
{

  // Kullanıcı tarafından bölünen ve bölen değerleri girilerek bölme işlemi
  // yapılmak istenmektedir.Buna göre aşağıda verilen prototipi kullanarak bölüm
  // ve kalanın elde edilmesini sağlayan C programını yazınız.
  // void bolmeişlemi( int bölünen , int bölen );

  int dividend;
  int divisor;

  printf("please enter the dividend number\n");
  scanf("%d", &dividend);
  printf("Please enter the divisor number\n");
  scanf("%d", &divisor);
  division(dividend, divisor);

  return 0;
}