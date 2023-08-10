
#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

int main()
{

  // mile question

  // Bir arabanın gittiği yolu mil cinsinden girdi olarak alan ve bunu km'ye
  // çeviren bir C programı yazın. (1 mil = 1609 km)

  float mile_road;
  float km_road;

  printf("How many miles has the vehicle traveled?\n");
  scanf("%f", &mile_road);

  km_road = mile_road * MIL;

  printf("In km, the vehicle has traveled %f", km_road);

  return 0;
}