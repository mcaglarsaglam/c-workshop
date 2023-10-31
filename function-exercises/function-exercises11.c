
#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n)
{
  int first = 0;
  int second = 1;
  int next;
  int i;

  printf("Fibonacci numbers to be generated \n");

  for (i = 0; i < n; i++)
  {
    if (i <= 1)
    {
      next = i;
    }
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
}

int main()
{

  // Her sayının kendinden önceki sayı ile toplanması sonucu oluşan sayı
  // dizisine Fibonacci dizisi adı verilmektedir.Buna göre klavyeden kaç adet
  // fibonacci sayısı üretileceği bilgisi girilerek sayıların üretilmesini
  // sağlayan C programını fonksiyon kullanarak yazınız.

  int number;

  printf("How many fibonacci numbers will be generated\n");
  scanf("%d", &number);
  fibonacci(number);

  return 0;
}