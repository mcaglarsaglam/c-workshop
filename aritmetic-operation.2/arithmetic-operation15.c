
#include <stdio.h>
#include <stdlib.h>
#define KM 450

int main()
{

  // Bir arabanın Ankara'dan İstambul(450km)'a varış zamanını saat cinsinden
  // girdi olarak alan ve arabanın ort. hızını hesaplayan bir C programı
  // yazınız.

  float time;
  float average_speed;

  printf("What time did you arrive from Ankara to Istanbul?\n");
  scanf("%f", &time);
  average_speed = KM / time;
  printf("average : %f", average_speed);

  return 0;
}