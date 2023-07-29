
#include <stdio.h>

main()
{

  // Write a program that prints an if-else screen whether a person can legally vote in elections

  float age;

  printf("Please enter your age\n");
  scanf("%f", &age);

  if (age >= 18)
  {
    printf("You can legally vote in the Turkish Republic");
  }

  else
  {
    printf("You cannot legally vote in the Republic of Türkiye.");
  }
}