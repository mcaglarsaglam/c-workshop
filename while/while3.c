
#include <stdio.h>

main()
{

  // Converting to While Do While

  int s;

  printf("Please enter a number.\n");
  scanf("%d", &s);

  int a = 1;

  do
  {
    printf("%d\n", a * s);
    a++;
  } while (a <= 10);

  return 0;
}