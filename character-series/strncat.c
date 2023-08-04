
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Strncat

  char caglar[100];
  char saglam[100];
  int a;

  printf("Please enter the first text\n");
  scanf("%s", &caglar);

  printf("Please enter the second text\n");
  scanf("%s", &saglam);

  printf(
      "How many characters do you want to add to the end of the first text?\n");
  scanf("%d", &a);

  printf("Before merging %s\n", caglar);

  printf("After merging %s\n", strncat(caglar, saglam, a));

  return 0;
}