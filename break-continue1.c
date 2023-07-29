
#include <stdio.h>

main()
{
  // Break Continue Inclusive Example

  int i;

  for (i = 0; i < 14; i++)
  {

    if (i == 7)
    {
      continue;
    }

    printf("%d\n", i);

    if (i == 11)
    {
      break;
    }

    return 0;
  }