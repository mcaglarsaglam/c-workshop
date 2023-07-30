
#include <stdio.h>
#include <stdlib.h>

void ussune_al(int a, int b, int *can)
{

  int i;
  *can = 1;
  for (i = 0; i < b; i++)
  {
    *can = *can * a;
  }
}

main()
{
  // degiskenin degeriyle islem
  // int ustunu_al(int x,ınt y)foksiyonunu yazınız.Foksiyon x ve y degerlerini
  // parametre olarak alıyor ve x
  // üzeri y degerini hesaplayıp döndürüyor. X=4 ve Y=5 oldugundan dolsyı sonuc
  // 1024 olarak döndürmesi gerekiyor
  // ve sonucu 4 üzeri 5 = 1024 şekline ekrana yazdırınız
  // Aynı soruyu degiskenin adresiyle islam yaparak cozunuz.

  // degiskenin-adresiyle-islem

  int x = 4, y = 5, conclusion;
  ussune_al(x, y, &conclusion);
  printf("%d", conclusion);

  return 0;
}