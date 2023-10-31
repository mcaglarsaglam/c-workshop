
#include <stdio.h>
#include <stdlib.h>

void shape(int edge, char character)
{
  int i;
  int j;

  for (j = edge; j > 0; j--)
  {
    for (i = 1; i <= edge - j; i++)
    {
      printf(" ");
    }

    for (i = 1; i <= 2 * j - 1; i++)
    {
      printf("%c", character);
    }

    printf("\n");
  }

  for (j = 1; j <= edge; j++)
  {
    for (i = 1; i <= edge - j; i++)
    {
      printf(" ");
    }

    for (i = 1; i <= 2 * j - 1; i++)
    {
      printf("%c", character);
    }

    printf("\n");
  }
}

int main()
{

  // Ekrana Kelebek Şeklinde Yıldız Basmayı Fonksiyon Yardımıyla Bulan Program

  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //      *
  //     ***
  //    *****
  //   *******
  //  *********

  int edge;
  char character;
  printf("Please enter the character to print\n");
  scanf("%c", &character);

  printf("Please enter the number of sides\n");
  scanf("%d", &edge);

  printf("\n\n\n");
  shape(edge, character);

  return 0;
}