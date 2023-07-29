
#include <stdio.h>

main()
{

  int s;

  printf("Please enter a number.\n");
  scanf("%d", &s);

  int a = 1;

  while (a <= 10)
  {
    printf("%d\n", a * s);
    a++;
  }
  return 0;
}