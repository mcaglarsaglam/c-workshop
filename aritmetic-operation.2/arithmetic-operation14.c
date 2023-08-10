
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Bir havuzun enini,boyunu,yüksekligini metre cinsinden girdi olarak alan ve
  // havuzun dolamsı için ne kadar su gerekli oldugunu hesaplayan bir C programı
  // yazınız.

  float width;
  float length;
  float height;
  float cubic_meters;

  printf("Width, length and height of the pool :\n");
  scanf("%f", &width);
  scanf("%f", &length);
  scanf("%f", &height);

  cubic_meters = width * length * height;

  printf("pool can hold up to %.2f water", cubic_meters);

  return 0;
}
