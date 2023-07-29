
#include <stdio.h>

main() {

  // ask the user to enter a number, write a program that prints whether the number is odd or even, using if else

  int census;

  printf("Please enter a number\n", census);
  scanf("%d", &census);

  if (census % 2 == 0) {

    printf("%d The number is an even number", census);
  }

  else {

    printf("%d Number is odd ", census);
  }

  return 0;
}
