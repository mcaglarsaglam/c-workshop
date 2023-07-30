#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Dizi Öğelerine Yeni Değer Atama

  int ayse[5] = {4, 78, 56, 12, 122};

  int a;

  ayse[3] = 54;

  for (a = 0; a < 5; a++)
  {
    printf("%d\n", ayse[a]);
  }
  return 0;
}