#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Strings

  char caglar[] = {'B', 'e', 'y', 'z', 'a', '=', 'C', 'a', 'g', 'l', 'a', 'r', '\0'};
  printf("%s\n", caglar);

  char c[] = "twin of my soul";
  printf("%s\n", c);
  char user[100];

  printf("please enter a string of characters\n");
  scanf("%s", &user);

  printf("\n");
  printf("%s", user);

  return 0;
}
