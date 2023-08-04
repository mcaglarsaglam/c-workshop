#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Strncpy

  char i[] = "Hello friends";
  char a[1000] = "";

  strncpy(a, i, 5);

  printf("%s", a);

  return 0;
}