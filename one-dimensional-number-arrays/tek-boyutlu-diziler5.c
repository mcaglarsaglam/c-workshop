#include <stdio.h>
#include <stdlib.h>

int main()
{

  // While Döngüsü ile Kullanıcıdan Tek Boyutlu Sayı Dizisi Değeri Alma ve
  // Bastırma

  int mynumbers[3];
  int i = 0;

  while (i < 3)
  {
    scanf("%d", &mynumbers[i]);

    i++;
  }
  i = 0;
  while (i < 3)
  {
    printf("%d\n", mynumbers[i]);

    i++;
  }

  return 0;
}