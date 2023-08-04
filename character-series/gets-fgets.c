#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Gets//Fgets

  char name[100];

  printf("Please enter a name\n");

  gets(name);

  printf("%s", name);

  char name[100];

  printf("Please enter a name\n");

  fgets(name, sizeof(name), stdin);

  printf("%s", name);

  return 0;
}