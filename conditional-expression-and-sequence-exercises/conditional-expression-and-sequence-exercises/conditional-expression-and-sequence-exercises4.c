
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // İngiliz alfabesinden herhangi bir büyük veya küçük harfi ch değişkenini
  // okuyan ve bu harflerin alfabede kaçıncı harf olduğunu bulan bir C programı
  // yazınız.

  // Örnek çıktı
  // bir harf giriniz : D
  // D : 4. harftir.

  char ch;
  int line;

  printf("Enter a character\n");
  scanf("%c", &ch);

  if ((ch >= 'A') && (ch <= 'Z'))
  {
    line = (int)ch - (int)'A' + 1;
  }
  else if ((ch >= 'a') && (ch <= 'z'))
  {
    line = (int)ch - (int)'a' + 1;
  }
  else
  {
    printf("Please enter a letter. There is no such letter.");
  }

  printf("%c : %d.is a letter", ch, line);

  return 0;
}