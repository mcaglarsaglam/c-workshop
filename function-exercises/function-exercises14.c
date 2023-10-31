
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delet(int A[], int number1, int number_of_elements)
{
  int p;

  if (number1 >= number_of_elements + 1)
  {
    printf("enter a valid sequence number\n");
  }
  else
  {
    for (p = number1 - 1; p < number_of_elements; p++)
    {
      A[p] = A[p + 1];
    }
    printf("Status after deletion\n");
    for (p = 0; p < number_of_elements - 1; p++)
    {
      printf("%d\n", A[p]);
    }
  }
}

int main()
{

  // Bilgisayar tarafından rastgele üretilen N adet sayı bir dizide
  // tutulmaktadır.Dizi içerisinde istenilen bir değerin dizideki sıra numarası
  // girilerek ilgili sırada bulunan dizi değerinin silinmesini sağlayan C
  // programını fonksiyon kullanarak yazınız.

  int j;
  int k;
  int number;
  printf("How many numbers will be produced?\n");
  scanf("%d", &j);
  int dizi[j];
  srand(time(0));
  for (k = 0; k < j; k++)
  {
    dizi[k] = rand() % 100;
    printf("%d\n", dizi[k]);
  }
  printf("\nEnter the sequence number of the value to be deleted\n");
  scanf("%d", &number);
  delet(dizi, number, j);

  return 0;
}