
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI * r * r)

main()
{
  // object-lıke macros(#define PI 3.14)
  // function-lıke macros(#define circleArea(r)(PI*r*r))

  //  C macros
  printf("File :%s\n", __FILE__);
  printf("Date :%s\n", __DATE__);
  printf("Time :%s\n", __TIME__);
  printf("Line :%s\n", __LINE__);
  printf("STDC :%s\n", __STDC__);

  return 0;
