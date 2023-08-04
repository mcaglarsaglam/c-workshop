
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{

  // example.1

  char d1[] = "bonne";
  char d2[] = "soiree";
  char s[100] = "";

  strcpy(s, d1);
  strncpy(s + 3, d2, 5);

  printf("%s", s);

  return 0;
}