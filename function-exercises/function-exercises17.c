
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void add(int A[], int sequenceno, int number1, int j)
{
  int i;
  if (sequenceno <= j + 1)
  {
    for (i = j - 1; i >= sequenceno - 1; i--)
    {
      A[i + 1] = A[i];
    }
    A[sequenceno - 1] = number1;

    printf("added version of our series\n");
    for (i = 0; i <= j; i++)
    {
      printf("%d\n", A[i]);
    }
  }
  else
  {
    printf("enter a valid sequence number\n");
  }
}

int main()
{

  // Bilgisayar tarafıdan rastgele üretilen N adet sayı bir dizide
  // tutulmaktadır.Dizi içerisinde dizi sıra numarası belirterek klavyeden
  // alınan bir tamsayının ilgili sıraya eklenmesini sağlayan C programını
  // fonksiyon olarak yazınız.

  int i;
  int n;
  int sequence;
  int number;

  printf("Please enter how many numbers will be produced\n");
  scanf("%d", &n);
  int dizi[200];
  srand(time(0));
  for (i = 0; i < n; i++)
  {
    dizi[i] = rand() % 100;
    printf("%d\n", dizi[i]);
  }
  printf("In which order will elements be added?\n");
  scanf("%d", &sequence);
  printf("What is the number to add?\n");
  scanf("%d", &number);

  add(dizi, sequence, number, n);

  return 0;
}