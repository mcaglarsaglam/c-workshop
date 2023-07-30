#include <stdio.h>
#include <stdlib.h>

int main()
{

  // exercise.2 N x P eleman içeren 2 matrisin elamanlarının toplamıyla bir C
  // programı yazın. Sonucu 3. bir matris ile yazdırın

  int dizi1[3][4] = {{1, 5, 7, 9}, {4, 3, 2, 7}, {6, 8, 9, 0}};
  int dizi2[3][4] = {{1, 4, 7, 8}, {4, 0, 2, 6}, {9, 8, 7, 5}};
  int total[3][4];
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {

      total[i][j] = dizi1[i][j] + dizi2[i][j];
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {

      printf("%4d", total[i][j]);
    }
    printf("\n");
  }

  return 0;
}