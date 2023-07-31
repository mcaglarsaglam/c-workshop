
#include <stdio.h>
#include <string.h>
#define PI 3.14
#define circleArea(r) (PI * r * r)

main()
{

  // C macros ornek

  float radius, area;

  printf("please enter a diameter\n");
  scanf("%f", &radius);
  area = circleArea(radius);
  printf("our field %.2f unit ", area);

  return 0;
}