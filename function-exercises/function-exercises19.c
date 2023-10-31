
#include <stdio.h>
#include <stdlib.h>

void swap(int j, int k)
{
  int temporary;

  temporary = j;
  j = k;
  k = temporary;
  printf("j=%d k=%d\n", j, k);
}

int main()
{

  // Kulanıcı tarafından girilen tamsayılar x ve y değişkenlerinde
  // tutulmaktadır. X ve Y değişkenlerinde yer alan değerlerin yerlerinin
  // değiştirilmesini sağlayan fonksiyon prototipi aşağıda verimiştir. Uygun C
  // programını ve fonksiyonunu yazınız.
  // void yerdegiştir(int *x int *y);

  int j;
  int k;

  printf("please enter two numbers\n");
  scanf("%d", &j);
  scanf("%d", &k);
  printf("j=%d k=%d\n", j, k);
  swap(j, k);

  return 0;
}