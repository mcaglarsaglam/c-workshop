#include <stdio.h>
#include <stdlib.h>

int main()
{

  // For Döngüsü ile Kullanıcıdan Tek Boyutlu Sayı Dizisi Değerlerini Alma ve
  // Yazdırma

  int mynumbers[3];
  int a;

  for (a = 0; a < 3; a++)
  {
    scanf("%d", &mynumbers[a]);
  }
  for (a = 0; a < 3; a++)
  {
    printf("%d\n", mynumbers[a]);
  }

  return 0;
}