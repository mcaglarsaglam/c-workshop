#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Strcat

  char big[100];

  strcpy(big, "My name is");

  strcat(big, " Caglar SAGLAM");

  printf("%s", big);

  return 0;
}