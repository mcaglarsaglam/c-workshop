#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Do While Döngüsü ile Kullanıcıdan Tek Boyutlu Sayı Dizisi Değeri Alma ve
  // Bastırma

  int mynumbers[3];
  int i = 0;

  do
  {
    scanf("%d", &mynumbers[i]);
    i++;
  } while (i < 3);

  i = 0;
  do
  {
    printf("%d\n", mynumbers[i]);
    i++;
  } while (i < 3);

  return 0;
}