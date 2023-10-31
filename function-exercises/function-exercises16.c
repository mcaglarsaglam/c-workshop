
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void organised(int A[], int piece)
{
  int i;
  int j;
  int interim;

  for (i = 0; i < piece; i++)
  {
    for (j = 0; j < piece; j++)
    {
      if (A[j] > A[j + 1])
      {
        interim = A[j];
        A[j] = A[j + 1];
        A[j + 1] = interim;
      }
    }
  }
}

int main()
{
  // Bilgisayar tarafından rastgele üretilen N adet sayı bir dizide
  // tutulmaktadır.Buna göre aşağıda verilen fonksiyon prototipini kullanarak
  // dizi elemanlarının küçükten büyüğe doğru sıralanmasını sağlayan C
  // programını fonksiyon olarak yazınız.
  // void sırala(int A[],int adet )

  int n;
  int i;

  printf("Please enter how many numbers will be produced\n");
  scanf("%d", &n);
  int dizi[100];
  srand(time(0));
  for (i = 0; i < n; i++)
  {
    dizi[i] = rand() % 100;
    printf("%d\n", dizi[i]);
  }
  printf("Sorted state of the array");
  organised(dizi, n);

  for (i = 0; i < n; i++)
  {
    printf("%4d", dizi[i]);
  }
  return 0;
}