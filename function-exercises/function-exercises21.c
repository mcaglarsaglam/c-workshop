
#include <stdio.h>
#include <stdlib.h>

float findaverage(int *dizi, int size)
{
  int i;
  int total = 0;
  for (i = 0; i < size; i++)
  {
    total += dizi[i];
  }
  return (float)total / size;
}

int main()
{

  // Kullanıcı tarafından N elamanlı bir diziye alınan tamsayıların ortalamsının
  // bulunmasını sağlayan fonksiyon prototipi aşağıda verilmiştir. Buna göre
  // aşağıdaki prototipi kullanarak C programını yazınız.
  // ( int *dizi , int  boyut );

  int j;
  int k;
  float average;
  printf("How many elements will be entered?\n");
  scanf("%d", &j);
  int dizi[j];
  for (k = 0; k < j; k++)
  {
    printf("%d. enter number :\n", k + 1);
    scanf("%d", &dizi[k]);
  }
  average = findaverage(dizi, j);
  printf("average of the numbers you entered %.3f", average);

  return 0;
}