
#include <stdio.h>
#include <stdlib.h>

int main()
{

  int sidelength;
  int area;

  printf("Enter the side length of the square:\n");
  scanf("%d", &sidelength);

  area = sidelength * sidelength;

  printf("area of the square=%d", area);

  return 0;
}