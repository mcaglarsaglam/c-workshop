#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Strcpy

  char i[] = "Hello friends";
  char a[1000];

  strcpy(a, i);

  printf("%s", a);

  return 0;
}