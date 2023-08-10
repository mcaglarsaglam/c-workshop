
#include <stdio.h>
#include <stdlib.h>
#define PI 3.141

// dairenin alanını bulmak için bir C programı yazınız.

int main()
{

  float area;
  float radius;

  printf("Please enter a radius\n");
  scanf("%f", &radius);

  area = PI * radius * radius;

  printf("area of the circle: %f", area);

  return 0;
}