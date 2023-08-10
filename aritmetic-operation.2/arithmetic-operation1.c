
#include <stdio.h>
#include <stdlib.h>

int main()
{

  float sidelength;
  float area;

  printf("Enter the side length of the square:\n");
  scanf("%f", &sidelength);

  area = sidelength * sidelength;

  printf("area of the square=%.2f", area);

  return 0;
}