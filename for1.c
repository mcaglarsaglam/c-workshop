
#include <stdio.h>

main()
{

  // ask the user to enter 1 number Calculate the sum of the numbers from 1 tothe number you entered with a
  // for loop

  int census;

  printf("Please enter a number\n");
  scanf("%d", &census);

  int total = 0;
  int i;

  for (i = 1; i <= census; i++)
  {
    total = total + i;
  }

  printf("total:%d", total);
  return 0;
}