
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // While döngüsünü kullanarak 0 ile kullanıcıdan aldığı n sayısı arasında yer
  // alan 17'nin tüm sayı katlarını ekrana bastıran bir program yazınız.

  int limit;
  int line;
  int i;

  printf("Please enter a limit value\n");
  scanf("%d", &limit);

  i = 0;
  line = 0;

  while (i <= limit)
  {
    if (i % 17 == 0)
    {
      printf("%5d", i);
      line++;
      if (line % 10 == 0)
      {
        printf("\n");
      }
    }
    i++;
  }

  return 0;
}