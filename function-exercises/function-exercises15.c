
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void triangle(int n)
{
  int i, j;
  int space = n - 1;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= space; j++)
    {
      printf(" ");
    }
    space--;
    for (j = 1; j <= 2 * i - 1; j++)
    {
      printf("c");
    }
    printf("\n");
  }
}
void triangleplus(int n)
{

  int space = 1;
  int i, j;
  for (i = 1; i <= n - 1; i++)
  {
    for (j = 1; j <= space; j++)
    {
      printf(" ");
    }
    space++;
    for (j = 1; j <= 2 * (n - i) - 1; j++)
    {
      printf("+");
    }
    printf("\n");
  }
}

int main()
{

  // Aşağıdaki verilen ekran görüntüsünün elde edilmesini sağlayan C programını
  // fonksiyon/foksiyonlar kullanarakyazınız.
  // Satır sayısını giriniz:4

  //      c
  //     ccc
  //    ccccc
  //   ccccccc
  //    +++++
  //     +++
  //      +

  int row;

  printf("Please enter the number of rows.\n");
  scanf("%d", &row);
  triangle(row);
  triangleplus(row);

  return 0;
}
