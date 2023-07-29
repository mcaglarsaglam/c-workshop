
#include <stdio.h>
main()
{

  // Take 2 numbers from the user and print them on the screen according to
  // upper
  // and lower case letters.

  int number1;
  int number2;

  printf("Please enter 2 numbers\n");
  scanf("%d %d", &number1, &number2);

  if (number1 == number2)
  {
    printf("CONCLUSION:%d=%d", number1, number2);
  }
  else if (number1 > number2)
  {
    printf("CONCLUSION:%d>%d", number1, number2);
  }

  else
  {
    printf("CONCLUSION:%d<%d", number1, number2);
  }

  return 0;
}