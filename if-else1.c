#include <stdio.h>

main()
{

  // With the program that takes 3 numbers from the user and finds the largest
  // number, first write the largest number using the if and then if else if
  // else structure.

  int a, b, c;

  printf("Please enter 3 numbers\n");
  scanf("%d%d%d", &a, &b, &c);

  if (a > b && a > c)
  {
    printf("%d The number is greatest", a);
  }

  else if (b > a && b > c)
  {
    printf("%d The number is greatest", b);
  }

  else if (c > a && c > b)
  {
    printf("%d The number is greatest", c);
  }

  else
  {
    printf("All numbers are equal to each other");
  }

  return 0;
}
